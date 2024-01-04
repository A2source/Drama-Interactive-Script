package states;

import flash.net.FileFilter;
import flash.net.FileReference;
import flixel.FlxG;
import flixel.addons.ui.FlxButtonPlus;
import objects.QuickObjects.*;
import openfl.events.Event;
import openfl.events.IOErrorEvent;
import openfl.text.TextField;
import openfl.utils.ByteArray;
#if sys
import sys.FileSystem;
import sys.io.File;
#end

class MenuState extends BaseState
{
	var scriptInput:TextField;
	var loadButton:FlxButtonPlus;
	var openButton:FlxButtonPlus;

	static var pdf:FileReference;

	override public function create()
	{
		super.create();

		scriptInput = createTextField(40, 100, 'Enter Script Name');

		loadButton = getButton(40, 134, 'Load Script', () ->
		{
			trace('opening ${scriptInput.text}');

			FlxG.switchState(new ScriptState());
		});
		add(loadButton);

		openButton = getButton(40, 180, 'Open PDF', () ->
		{
			trace('select file');

			pdf = new FileReference();

			var filters:Array<FileFilter> = new Array<FileFilter>();
			filters.push(new FileFilter("PDF Files", "*.pdf"));

			pdf.addEventListener(Event.SELECT, onSelectPDF);
			pdf.addEventListener(Event.CANCEL, onClosePDF);
			pdf.addEventListener(IOErrorEvent.IO_ERROR, onErrorPDF);
			pdf.browse(filters);
		});
		add(openButton);

		#if sys
		var i:Int = 0;
		for (dir in FileSystem.readDirectory('assets/scripts/'))
		{
			var path = haxe.io.Path.join(['assets/scripts/', dir]);
			if (FileSystem.isDirectory(path))
			{
				var button = getButton(800, 80 + (i * 40), dir, () ->
				{
					trace('opening ${dir}');

					ScriptState.scriptName = dir;
					FlxG.switchState(new ScriptState());
				});
				add(button);

				i++;
			}
		}
		#end
	}

	override public function update(dt:Float)
	{
		super.update(dt);
	}

	private static function onSelectPDF(e:Event)
	{
		pdf.removeEventListener(Event.SELECT, onSelectPDF);
		pdf.removeEventListener(Event.CANCEL, onClosePDF);
		pdf.removeEventListener(IOErrorEvent.IO_ERROR, onErrorPDF);

		trace('success!');
		trace('found pdf file ${pdf.name}');

		#if sys
		var path:String = null;
		@:privateAccess
		if (pdf.__path != null)
			path = pdf.__path;

		if (path != null)
		{
			trace('saving path "${path}"');

			var split = path.split('\\');
			var name = split[split.length - 1].split('.')[0];
			trace(name);

			if (!FileSystem.exists('assets/scripts/${name}/'))
			{
				FileSystem.createDirectory('assets/scripts/${name}/pages/');

				Sys.command('py assets/converter/main.py "${path}" "${name}"');

				ScriptState.scriptName = name;
				FlxG.switchState(new ScriptState());
			}
			else
				trace('this script exists already!');
		}
		#else
		trace('Not on PC');
		#end
	}

	private static function onClosePDF(e:Event)
	{
		pdf.removeEventListener(Event.SELECT, onSelectPDF);
		pdf.removeEventListener(Event.CANCEL, onClosePDF);
		pdf.removeEventListener(IOErrorEvent.IO_ERROR, onErrorPDF);

		trace('closed file browser');
	}

	private static function onErrorPDF(e:IOErrorEvent)
	{
		pdf.removeEventListener(Event.SELECT, onSelectPDF);
		pdf.removeEventListener(Event.CANCEL, onClosePDF);
		pdf.removeEventListener(IOErrorEvent.IO_ERROR, onErrorPDF);

		trace('IO Error');
	}
}
