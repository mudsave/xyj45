// dragon.c

inherit NPC;

void create()
{
	set_name("???۱???", ({ "icedragon","dragon" }) );
	set("long",
		"һֻ???????????۵?????\n");

	set("race", "Ұ??");
	set("age", 600);
	set("attitude", "aggressive");

	set("max_gin", 1300);
	set("max_kee", 5000);
	set("max_sen", 800);

	set("str", 40);
	set("cor", 200);
	set("cps", 30);
	set("spi", 70);
	set("int", 20);
        set("con",1000);
	set("limbs", ({ "ͷ??", "????", "ǰצ", "??צ", "β??" }) );
	set("verbs", ({ "bite", "claw" }) );

	set_temp("apply/attack", 50);
	set_temp("apply/dodge", 120);
	set_temp("apply/armor", 100);
	set_temp("apply/damage", 10);

	set("combat_exp", 1000000);
	setup();
}
