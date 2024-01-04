package states;

import flash.ui.Mouse;
import flash.ui.MouseCursor;
import flixel.FlxG;
import flixel.FlxState;
import flixel.util.FlxColor;

class BaseState extends FlxState
{
	override public function create()
	{
		super.create();

		bgColor = FlxColor.fromRGB(96, 96, 96);

		FlxG.mouse.useSystemCursor = true;
		Mouse.cursor = MouseCursor.AUTO;

		if (Main.debugData != null)
			Main.debugData.extras = [];
	}

	override public function update(dt:Float)
	{
		super.update(dt);

		// this is bullshit LOL
		if (FlxG.fullscreen)
			FlxG.fullscreen = false;
	}
}
