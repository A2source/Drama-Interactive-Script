package backend;

import openfl.text.TextFormat;
import openfl.utils.Assets;

class Display
{
	public static function textFormat(col:Int)
	{
		return new TextFormat(Assets.getFont("assets/fonts/metropolis.otf").fontName, 20, col);
	}
}
