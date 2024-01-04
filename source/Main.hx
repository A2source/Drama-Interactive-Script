package;

import flixel.FlxGame;
import openfl.display.Debug;
import openfl.display.Sprite;
import openfl.display.StageScaleMode;

class Main extends Sprite
{
	public static var debugData:Debug;

	public function new()
	{
		super();

		addChild(new FlxGame(0, 0, states.MenuState));

		#if !mobile
		debugData = new Debug(5, 5, 0xFFFFFF);
		addChild(debugData);
		#end
	}
}
