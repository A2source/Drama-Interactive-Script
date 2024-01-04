package objects.assets;

import flixel.FlxSprite;
import flixel.util.FlxColor;

class Asset extends FlxSprite
{
	override function new(_x:Int, _y:Int, w:Int, h:Int, col:FlxColor)
	{
		super(_x, _y);

		width = w;
		height = h;
		color = col;
	}

	override public function update(dt:Float)
	{
		super.update(dt);

		makeGraphic(Std.int(width), Std.int(height), color);
	}
}
