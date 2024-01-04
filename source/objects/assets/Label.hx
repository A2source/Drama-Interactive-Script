package objects.assets;

import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import openfl.text.TextField;

class Label extends Asset
{
	public var text:TextField;
	public var textPos:FlxPoint;

	public function new(_x:Int, _y:Int, w:Int, h:Int, string:String = 'Label', col:FlxColor = FlxColor.BLACK)
	{
		super(_x, _y, w, h, col);

		this.textPos = new FlxPoint(_x, _y);
		this.text = QuickObjects.createText(_x, _y, string, -1, 22, col);
	}

	override public function update(dt:Float)
	{
		super.update(dt);

		text.x = textPos.x;
		text.y = textPos.y;
	}

	public function getTextWidth()
	{
		return text.width;
	}

	public function getTextHeight()
	{
		return text.height;
	}

	public function setTextX(_x:Int)
	{
		text.x = _x;
	}

	public function setTextY(_y:Int)
	{
		text.y = _y;
	}
}
