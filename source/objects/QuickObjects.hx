package objects;

import backend.Display;
import flash.ui.Mouse;
import flash.ui.MouseCursor;
import flixel.FlxG;
import flixel.addons.ui.FlxButtonPlus;
import flixel.util.FlxColor;
import openfl.events.FocusEvent;
import openfl.events.MouseEvent;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.utils.Assets;

class QuickObjects
{
	/*
	 * Easy function to generate a typable TextField object without having to go through all the hassle of setting the individual bits
	 */
	public static function createTextField(x:Int = 0, y:Int = 0, defaultString:String = 'Input...', width:Int = 300, height:Int = 22,
			textCol:Int = 0xFF000000):TextField
	{
		var textField:TextField = new TextField();
		textField.defaultTextFormat = Display.textFormat(textCol);
		textField.background = true;
		textField.text = defaultString;
		textField.type = 'input';

		textField.x = x;
		textField.y = y;
		textField.width = width;
		textField.height = height;

		textField.border = true;
		textField.borderColor = 0xFF000000;

		textField.addEventListener(MouseEvent.CLICK, (e:MouseEvent) ->
		{
			if (textField.text == defaultString)
				textField.text = '';
		});

		textField.addEventListener(FocusEvent.MOUSE_FOCUS_CHANGE, (e:FocusEvent) ->
		{
			if (!textField.hitTestPoint(FlxG.mouse.x, FlxG.mouse.y))
				if (textField.text == '')
					textField.text = defaultString;
		});

		FlxG.addChildBelowMouse(textField);

		return textField;
	}

	/*
	 * Quickly generate a non-editable TextField object
	 */
	public static function createText(x:Int = 0, y:Int = 0, string:String = 'String', width:Int = -1, height:Int = 22, textCol:Int = 0xFF000000):TextField
	{
		var textField:TextField = new TextField();
		textField.defaultTextFormat = Display.textFormat(textCol);
		textField.text = string;
		textField.selectable = false;

		switch (width)
		{
			// create a long field that ends at the end of the string
			// word wrap is on but this just auto-fits the default string to it
			case -1:
				textField.width = textField.textWidth + 5;

			// just in case you make a set size of text field it'll auto wrap
			// instaead of doing the auto-fit
			default:
				textField.width = width;
		}

		textField.wordWrap = true;

		textField.height = height;

		FlxG.addChildBelowMouse(textField);

		return textField;
	}

	/*
	 * Create a button object
	 */
	public static function getButton(x:Int = 0, y:Int = 0, label:String = 'Click Me', ?callback:() -> Void = null, ?customEnterCallback:() -> Void = null,
			?customLeaveCallback:() -> Void = null, borderCol:FlxColor = FlxColor.BLACK, width:Int = 100, height:Int = 22)
	{
		var button:FlxButtonPlus = new FlxButtonPlus(x, y, callback, label, width, height);

		button.borderColor = borderCol;

		button.updateActiveButtonColors([0xFF969696, 0xFF969696]);
		button.updateInactiveButtonColors([0xFF505050, 0xFF505050]);

		button.textNormal.setFormat(Assets.getFont("assets/fonts/metropolis.otf").fontName, 15, 0xFFFFFFFF);
		button.textHighlight.setFormat(Assets.getFont("assets/fonts/metropolis.otf").fontName, 15, 0xFFFFFFFF);

		if (customEnterCallback != null)
			button.enterCallback = customEnterCallback;
		else
			button.enterCallback = () ->
			{
				// this is so hot
				Mouse.cursor = MouseCursor.BUTTON;
			}

		if (customLeaveCallback != null)
			button.leaveCallback = customLeaveCallback;
		else
			button.leaveCallback = () ->
			{
				Mouse.cursor = MouseCursor.AUTO;
			}

		return button;
	}
}
