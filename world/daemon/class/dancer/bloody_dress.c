// bloody_dress.c

#include <ansi.h>

inherit EQUIP;

void create()
{
	set_name( HIM "??˪Ѫ????" NOR, ({ "bloody dress", "dress" }) );
	set_weight(700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "??");
		set("value", 40000);
		set("material", "cloth");
		set("armor_type", "cloth");
		set("armor_prop/armor", 3);
		set("armor_prop/dodge", 10);
	}
}
