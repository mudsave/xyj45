// boots.c

#include <armor.h>

inherit BOOTS;

void create()
{
	set_name("?ڲ?Ь", ({"black boots", "boots"}) );
	set_weight(400);
	if( clonep() )
		set_default_object(__FILE__);
    else {
		set("unit", "˫");
		set("material", "cloth");
		set("value", 100);
		set("armor_prop/armor", 1);
		set("armor_prop/move", 1);
	}
	setup();
}
