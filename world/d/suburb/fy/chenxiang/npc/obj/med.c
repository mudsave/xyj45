// 
// 

inherit ITEM;
inherit F_LIQUID;
void create()
{
	set_name("?ڴ?ҩ??", ({ "medvase", "vase" }) );
	set_weight(700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ??ɢ????Ũ?ҵ??в?ҩζ??ҩ??\n");
		set("unit", "??");
		set("value", 100);
		set("max_liquid", 5);
	}

	// The liquid contained in the container is independent, we set a copy
	// in each cloned copy.
	set("liquid", ([
		"type": "soup",
		"name": "???鲹Ѫ????",
		"remaining": 5,
		"drunk_apply": 0,
	]) );
}
