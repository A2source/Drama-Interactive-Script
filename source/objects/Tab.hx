package objects;

import flixel.FlxBasic;
import flixel.FlxG;
import flixel.addons.ui.FlxButtonPlus;
import flixel.group.FlxGroup;
import flixel.math.FlxPoint;
import states.ScriptState;

class Tab extends FlxBasic
{
	public var button:FlxButtonPlus;
	public var dropdown:FlxTypedGroup<FlxButtonPlus>;

	public var hovering:Bool = false;
	public var open:Bool = false;

	public var canInteract:Bool = true;

	public function new(_button:FlxButtonPlus, _dropdown:FlxTypedGroup<FlxButtonPlus>)
	{
		super();

		button = _button;
		dropdown = _dropdown;
	}

	override public function update(dt)
	{
		if (canInteract)
		{
			hovering = false;

			var mPos:FlxPoint = new FlxPoint(FlxG.mouse.x, FlxG.mouse.y);
			dropdown.forEach(function(segment)
			{
				segment.x = button.x;

				var segHovering = segment.overlapsPoint(mPos);
				hovering = (!segHovering ? hovering : segHovering);
			});

			if (button.overlapsPoint(mPos))
				hovering = true;
		}

		if (!hovering && open)
			closeDropdown();
	}

	public function openDropdown()
	{
		if (canInteract)
		{
			trace('lol (opened dropdown)');
			open = true;

			dropdown.forEach(function(segment)
			{
				ScriptState.instance.add(segment);

				if (!segment.exists)
					segment.exists = true;
			});
		}
	}

	public function closeDropdown()
	{
		trace('lol (closed dropdown)');
		open = false;

		dropdown.forEach(function(segment)
		{
			segment.exists = false;
		});
	}
}
