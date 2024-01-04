package objects;

import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;

class Ribbon
{
	public var tabs:FlxTypedGroup<Tab>;
	public var hidden:Bool = false;

	public function new(layout:FlxTypedGroup<Tab>, alignment:String = 'right')
	{
		tabs = layout;

		var prevX:Dynamic = 0;
		var totalWidth:Dynamic = 0;
		tabs.forEach(function(tab)
		{
			tab.button.x = prevX;

			prevX += tab.button.width;
			totalWidth += tab.button.width;
		});

		if (alignment == 'right')
			tabs.forEach(function(tab)
			{
				tab.button.x += FlxG.width - totalWidth;
			});
	}

	public function hide()
	{
		hidden = true;
		tabs.forEach(function(tab)
		{
			tab.canInteract = false;
			FlxTween.tween(tab.button, {y: tab.button.y - tab.button.height}, 0.2, {ease: FlxEase.expoOut});
		});
	}

	public function show()
	{
		hidden = false;
		tabs.forEach(function(tab)
		{
			FlxTween.tween(tab.button, {y: 0}, 0.2, {
				ease: FlxEase.expoOut,
				onComplete: (tween:FlxTween) ->
				{
					tab.canInteract = true;
				}
			});
		});
	}
}
