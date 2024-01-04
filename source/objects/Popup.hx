package objects;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.ui.FlxButtonPlus;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxAxes;
import flixel.util.FlxColor;
import states.ScriptState;

class Popup extends FlxSprite
{
	var closeButton:FlxButtonPlus;
	var outline:FlxSprite;

	public function new(scale:Float = 0.65, canClose:Bool = true)
	{
		super();
		makeGraphic(Std.int(FlxG.width * scale), Std.int(FlxG.height * scale), FlxColor.fromRGB(60, 60, 60));
		screenCenter(FlxAxes.XY);

		outline = new FlxSprite().makeGraphic(Std.int(width + 2), Std.int(height + 2), 0xFF000000);
		outline.visible = false;

		if (canClose)
		{
			closeButton = QuickObjects.getButton(0, Std.int(y) + 1, 'X', close, null, null, FlxColor.RED, 22);
			closeButton.updateActiveButtonColors([0xFFFF9494, 0xFFFF3939]);
			closeButton.updateInactiveButtonColors([0xFFFF0000, 0xFFCA0000]);

			closeButton.x = x + width - closeButton.width;
		}

		visible = false;
	}

	override public function update(dt:Float)
	{
		super.update(dt);

		outline.setPosition(x - 1, y - 1);
		outline.scale.set(scale.x, scale.y);
	}

	public function add()
	{
		ScriptState.instance.add(outline);
		ScriptState.instance.add(this);

		if (closeButton != null)
			ScriptState.instance.add(closeButton);

		open();
	}

	public function open()
	{
		visible = true;
		outline.visible = true;

		scale.set(0, 0);
		FlxTween.tween(scale, {x: 1, y: 1}, 0.2, {
			ease: FlxEase.expoOut,
			onComplete: (tween:FlxTween) ->
			{
				if (closeButton != null)
					closeButton.exists = true;
			}
		});
	}

	public function close()
	{
		trace('gbye popup o7');

		if (closeButton != null)
			closeButton.exists = false;

		FlxTween.tween(scale, {x: 0, y: 0}, 0.2, {
			ease: FlxEase.expoOut,
			onComplete: (tween:FlxTween) ->
			{
				visible = false;
				outline.visible = false;
			}
		});

		ScriptState.instance.showRibbon();
	}
}
