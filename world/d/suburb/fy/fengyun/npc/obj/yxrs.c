inherit F_FOOD;
inherit ITEM;

void create()
{
	set_name("??????˿", ({ "yxrs", "dish" }) );
	set_weight(350);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ?????????????Ϻô??ˡ?\n");
		set("unit", "??");
		set("value", 1000);
		set("food_remaining", 5);
		set("food_supply", 50);
		set("material", "food");
	}
	setup();
}
int finish_eat()
{
        set_name("????", ({"panzi"}));
	set("value",200);
        set("long", "һֻ???׶??񻨵ľ?̩???????ӡ?\n");
        return 1;
}
