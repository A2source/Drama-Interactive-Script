package states;

import flixel.FlxG;
import flixel.addons.ui.FlxButtonPlus;
import flixel.group.FlxGroup;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import objects.Popup;
import objects.QuickObjects.*;
import objects.Ribbon;
import objects.Script;
import objects.Tab;
import objects.assets.*;
import openfl.Lib;

class ScriptState extends BaseState
{
	public static var scriptName:String = '';

	var script:Script;

	var scrollSpeed:Float = 1;
	var scrollTimer:FlxTimer;

	var ribbon:Ribbon;
	var ribbonHoverTimers:Array<FlxTimer>;

	public static var instance:ScriptState;

	var state:String = 'reading';
	var assetToAdd:String = '';
	var curAddingAsset:Dynamic;

	var placeTimer:FlxTimer;

	var optionsTab:Tab;
	var assetsTab:Tab;
	var scriptTab:Tab;

	var savedMousePos:FlxPoint;

	override public function create()
	{
		super.create();
		instance = this;

		script = new Script(scriptName);
		add(script.pages);

		trace('working with script ${scriptName}');
		var scriptLabel = createText(0, 0, scriptName);
		scriptLabel.x = FlxG.width - scriptLabel.width;
		scriptLabel.y = FlxG.height - scriptLabel.height;

		// https://api.haxeflixel.com/flixel/input/mouse/FlxMouseEvent.html
		// this is nice btw use this

		scrollTimer = new FlxTimer();
		placeTimer = new FlxTimer();

		ribbonHoverTimers = new Array<FlxTimer>();
		for (i in 0...3)
			ribbonHoverTimers.push(new FlxTimer());

		var tabs = new FlxTypedGroup<Tab>();
		var hoverDelayTime:Float = 0.2;

		// ------------------------------------------------------------------------------

		var optionsButton:FlxButtonPlus = getButton(0, 0, 'Options', null, null, () ->
		{
			/* ON MOUSE LEAVE */
			var curTimer = ribbonHoverTimers[0];

			if (curTimer.active)
				curTimer.cancel();
		});

		var optionsDropdown:FlxTypedGroup<FlxButtonPlus> = new FlxTypedGroup<FlxButtonPlus>();
		optionsDropdown.add(getButton(0, Std.int(optionsButton.height * (optionsDropdown.members.length + 1)), 'Preferences', () ->
		{
			trace('ah, good ol options menu');
		}));
		optionsDropdown.add(getButton(0, Std.int(optionsButton.height * (optionsDropdown.members.length + 1)), 'Shortcuts', () ->
		{
			trace('keyboard shortcuts are hot');
		}));

		optionsTab = new Tab(optionsButton, optionsDropdown);
		optionsButton.enterCallback = () ->
		{
			/* ON MOUSE ENTER */
			var curTimer = ribbonHoverTimers[0];
			if (curTimer.active)
				curTimer.cancel();

			curTimer.start(hoverDelayTime, (timer:FlxTimer) ->
			{
				trace('HOVERED AND OPENED OPTIONS');
				optionsTab.openDropdown();
			});
		}
		tabs.add(optionsTab);

		// ------------------------------------------------------------------------------

		var assetsButton:FlxButtonPlus = getButton(0, 0, 'Add', null, null, () ->
		{
			/* ON MOUSE LEAVE */
			var curTimer = ribbonHoverTimers[1];

			if (curTimer.active)
				curTimer.cancel();
		});

		var assetsDropdown:FlxTypedGroup<FlxButtonPlus> = new FlxTypedGroup<FlxButtonPlus>();
		assetsDropdown.add(getButton(0, Std.int(assetsButton.height * (assetsDropdown.members.length + 1)), 'Label', () ->
		{
			// Lib.application.window.warpMouse(Std.int(FlxG.width / 2), Std.int(FlxG.height / 2));
			// movedMouse = false;

			// new FlxTimer().start(0.07, (timer:FlxTimer) ->
			// {
			// 	savedMousePos = new FlxPoint(FlxG.mouse.x, FlxG.mouse.y);

			// 	trace('label, a classic');
			// 	state = 'adding';
			// 	assetToAdd = 'label';

			// 	curAddingAsset = new Label(0, 0, 0, 5);
			// 	add(curAddingAsset);

			// 	assetsTab.closeDropdown();
			// 	removeRibbon();
			// });

			var popup:Popup = new Popup();
			popup.add();

			hideRibbon();
		}));
		assetsDropdown.add(getButton(0, Std.int(assetsButton.height * (assetsDropdown.members.length + 1)), 'SFX', () ->
		{
			trace('sound effect, also a classic');
		}));
		assetsDropdown.add(getButton(0, Std.int(assetsButton.height * (assetsDropdown.members.length + 1)), 'Music', () ->
		{
			trace('music, new but appreciated');
		}));
		assetsDropdown.add(getButton(0, Std.int(assetsButton.height * (assetsDropdown.members.length + 1)), 'Event', () ->
		{
			trace('event, added right before provincials but very useful');
		}));
		assetsTab = new Tab(assetsButton, assetsDropdown);
		assetsButton.enterCallback = () ->
		{
			/* ON MOUSE ENTER */
			var curTimer = ribbonHoverTimers[1];
			if (curTimer.active)
				curTimer.cancel();
			curTimer.start(hoverDelayTime, (timer:FlxTimer) ->
			{
				trace('HOVERED AND OPENED ASSETS');
				assetsTab.openDropdown();
			});
		}
		tabs.add(assetsTab);

		// ------------------------------------------------------------------------------

		var scriptButton:FlxButtonPlus = getButton(0, 0, 'Script', null, null, () ->
		{
			/* ON MOUSE LEAVE */
			var curTimer = ribbonHoverTimers[2];
			if (curTimer.active)
				curTimer.cancel();
		});

		var scriptDropdown:FlxTypedGroup<FlxButtonPlus> = new FlxTypedGroup<FlxButtonPlus>();
		scriptDropdown.add(getButton(0, Std.int(scriptButton.height * (scriptDropdown.members.length + 1)), 'Save', () ->
		{
			trace('saved lol');
		}));
		scriptDropdown.add(getButton(0, Std.int(scriptButton.height * (scriptDropdown.members.length + 1)), 'Save As...', () ->
		{
			trace('saved as lol');
		}));
		scriptDropdown.add(getButton(0, Std.int(scriptButton.height * (scriptDropdown.members.length + 1)), 'Open', () ->
		{
			trace('opening a menu');
		}));
		scriptDropdown.add(getButton(0, Std.int(scriptButton.height * (scriptDropdown.members.length + 1)), 'Exit', () ->
		{
			FlxG.switchState(new MenuState());
		}));
		scriptDropdown.members[scriptDropdown.length - 1].updateActiveButtonColors([0xFFFF9494, 0xFFFF3939]);
		scriptDropdown.members[scriptDropdown.length - 1].updateInactiveButtonColors([0xFFFF0000, 0xFFCA0000]);
		scriptTab = new Tab(scriptButton, scriptDropdown);
		scriptButton.enterCallback = () ->
		{
			/* ON MOUSE ENTER */
			var curTimer = ribbonHoverTimers[2];

			if (curTimer.active)
				curTimer.cancel();
			curTimer.start(hoverDelayTime, (timer:FlxTimer) ->
			{
				trace('HOVERED AND OPENED SCRIPT');
				scriptTab.openDropdown();
			});
		}
		tabs.add(scriptTab);
		// ------------------------------------------------------------------------------
		ribbon = new Ribbon(tabs);
		ribbon.tabs.forEach(function(tab)
		{
			add(tab.button);
		});
	}

	override public function update(dt:Float)
	{
		super.update(dt);

		script.update(dt);
		if (FlxG.mouse.wheel != 0)
		{
			script.scroll(-Std.parseFloat(Std.string(FlxG.mouse.wheel)) * scrollSpeed, scrollTimer);

			if (scrollTimer.active)
				scrollTimer.cancel();

			scrollTimer.start(0.05);
		}

		switch (state)
		{
			case 'reading':
				updateReading(dt);

			case 'adding':
				switch (assetToAdd)
				{
					case 'label':
						updateAddingLabel(dt);
				}
		}

		setDebugData();
	}

	function updateAddingLabel(dt:Float)
	{
		var w = FlxG.width / 2;

		curAddingAsset.y = FlxG.mouse.y;
		curAddingAsset.setTextY(FlxG.mouse.y - curAddingAsset.getTextHeight());

		if (FlxG.mouse.x - w > 0)
		{
			curAddingAsset.x = w;
			curAddingAsset.width = FlxG.mouse.x - w;

			curAddingAsset.setTextX((curAddingAsset.x + curAddingAsset.width) - curAddingAsset.getTextWidth());
		}
		else
		{
			curAddingAsset.x = FlxG.mouse.x;
			curAddingAsset.width = w - FlxG.mouse.x;

			curAddingAsset.setTextX(FlxG.mouse.x);
		}

		if (FlxG.mouse.justPressed)
		{
			state = 'reading';
			assetToAdd = '';

			curAddingAsset = null;

			showRibbon();
		}
	}

	function updateReading(dt:Float)
	{
		ribbon.tabs.forEach(function(tab)
		{
			tab.update(dt);
		});
	}

	public function showRibbon()
	{
		if (ribbon.hidden)
			ribbon.show();
	}

	function hideRibbon()
	{
		if (!ribbon.hidden)
		{
			ribbon.tabs.forEach(function(tab)
			{
				tab.closeDropdown();
			});
			ribbon.hide();
		}
	}

	function setDebugData()
	{
		// clear it out so we can add everything correctly
		Main.debugData.extras = [];

		Main.debugData.extras.push('\nPage Count: ${script.pages.length}');

		Main.debugData.extras.push('\nOptions Tab hovering: ${ribbon.tabs.members[0].hovering}');
		Main.debugData.extras.push('Asset Tab hovering: ${ribbon.tabs.members[1].hovering}');
		Main.debugData.extras.push('Script Tab hovering: ${ribbon.tabs.members[2].hovering}');
	}
}
