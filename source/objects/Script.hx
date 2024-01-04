package objects;

import flash.display.BitmapData;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.graphics.FlxGraphic;
import flixel.group.FlxGroup;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxAxes;
import flixel.util.FlxTimer;
#if sys
import sys.FileSystem;
#end

class Script
{
	public var pages:FlxTypedGroup<FlxSprite>;

	// quick access to these is always nice
	private var firstPage:FlxSprite;
	private var lastPage:FlxSprite;

	public function new(name:String)
	{
		pages = new FlxTypedGroup<FlxSprite>();

		var path:String = 'assets/scripts/${name}/pages/';
		#if sys
		var i:Int = 0;
		for (file in FileSystem.readDirectory(path))
		{
			var bitmap:BitmapData = BitmapData.fromFile(path + file);

			var page:FlxSprite = new FlxSprite().loadGraphic(FlxGraphic.fromBitmapData(bitmap));

			var width = FlxG.width / 1.7;

			// A1 PAPER RATIO!!
			page.setGraphicSize(width, width * 1.414);
			page.updateHitbox();

			page.antialiasing = true;

			page.screenCenter(FlxAxes.X);
			page.y = 50;
			page.y += (page.height + 30) * i;

			pages.add(page);

			i++;
		}

		firstPage = pages.members[0];
		lastPage = pages.members[pages.length - 1];
		#end
	}

	public function update(dt:Float)
	{
		if (firstPage.y > 55)
		{
			var i:Int = 0;
			pages.forEach(function(page)
			{
				FlxTween.cancelTweensOf(page.velocity);
				page.velocity.y = 0;

				page.y = 50 + (page.height + 30) * i;

				i++;
			});
		}
		else if (lastPage.y < -415)
		{
			var i:Int = pages.length - 1;
			pages.forEach(function(page)
			{
				FlxTween.cancelTweensOf(page.velocity);
				page.velocity.y = 0;

				page.y = -410 - (page.height - 30) * i;

				--i;
			});
		}
	}

	public function scroll(amt:Float, timer:FlxTimer)
	{
		if (firstPage.y < 55)
		{
			pages.forEach(function(page)
			{
				// scrolling the same speed the whole time no matter how fast you move the wheel just
				// doesn't feel right? and pissed me off? so yea
				// a fix for that
				page.velocity.y -= amt * (timer.active ? 1400 : 800);

				FlxTween.cancelTweensOf(page.velocity);
				FlxTween.tween(page.velocity, {y: 0}, 1, {ease: FlxEase.expoOut});
			});
		}
	}
}
