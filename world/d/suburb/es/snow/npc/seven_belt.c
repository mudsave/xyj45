// seven_belt.c

#include <ansi.h>

inherit EQUIP;

void create()
{
	set_name( HIY "?߲ʱ?ʯָ??" NOR, ({ "seven belt", "belt" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "??");
		set("value", 27000);
		set("material", "cloth");
		set("armor_type", "waist");
		set("armor_prop/armor", 50);
		set("armor_prop/dodge", 20);
	}
}

