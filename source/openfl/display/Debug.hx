package openfl.display;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxMath;
import haxe.Timer;
import openfl.events.Event;
import openfl.system.System;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.utils.Assets;
#if gl_stats
import openfl.display._internal.stats.Context3DStats;
import openfl.display._internal.stats.DrawCallContext;
#end
#if flash
import openfl.Lib;
#end

#if !openfl_debug
@:fileXml('tags="haxe,release"')
@:noDebug
#end
class Debug extends TextField
{
	/**
		The current frame rate, expressed using frames-per-second
	**/
	public var currentFPS(default, null):Int;

	public var currentMem:Float;

	public var highestMem:Float;

	@:noCompletion private var cacheCount:Int;
	@:noCompletion private var currentTime:Float;
	@:noCompletion private var times:Array<Float>;

	var lastUpdate:Float = 0;

	public var extras:Array<String>;

	public function new(x:Float = 10, y:Float = 10, color:Int = 0x000000)
	{
		super();

		this.x = x;
		this.y = y;

		currentFPS = 0;
		selectable = false;
		mouseEnabled = false;
		defaultTextFormat = new TextFormat(Assets.getFont("assets/fonts/metropolis.otf").fontName, 15, color);
		width = FlxG.width;
		height = FlxG.height;

		text = "";

		cacheCount = 0;
		currentTime = 0;
		highestMem = 0;
		times = [];

		extras = [];

		#if flash
		addEventListener(Event.ENTER_FRAME, function(e)
		{
			__enterFrame(Timer.stamp() - lastUpdate);
		});
		#end
	}

	// Event Handlers
	@:noCompletion
	private #if !flash override #end function __enterFrame(d:Float):Void
	{
		currentTime = Timer.stamp();

		var dt = currentTime - lastUpdate;
		lastUpdate = currentTime;

		times.push(currentTime);

		while (times[0] < currentTime - 1)
			times.shift();

		var currentCount = times.length;
		currentFPS = currentCount;
		currentMem = Math.abs(Math.round(System.totalMemory / (1e+6)));

		text = '';
		text += currentFPS + ' FPS\n';

		// memory
		if (currentMem > highestMem)
			highestMem = currentMem;

		var desiredMem = currentMem;
		var suffix = ' MB';
		if (desiredMem > 1000)
		{
			desiredMem = FlxMath.roundDecimal(desiredMem / 1000, 2);
			suffix = ' GB';
		}
		text += desiredMem + suffix;

		desiredMem = highestMem;
		suffix = ' MB';
		if (highestMem > 1000)
		{
			desiredMem = FlxMath.roundDecimal(highestMem / 1000, 2);
			suffix = ' GB';
		}
		text += ' \\ ' + desiredMem + suffix;

		for (string in extras)
			text += '\n' + string;

		cacheCount = currentCount;
		//
	}
}
