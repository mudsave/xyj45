// bonze.c

inherit NPC;

void create()
{
	set_name("ɮ??", ({ "bonze" }) );
	set("gender", "????" );
	set("class", "bonze");
	set("age", 52);
	set("str", 26);
	set("cor", 14);
	set("cps", 29);
	set("int", 25);
	set("long", "һ??Ц??????ɮ?˶?????΢΢???ס?\n");
	set("combat_exp", 6000);
	set("attitude", "friendly");
	set("max_force", 500);
	set("force", 500);
	set("force_factor", 5);
	set_skill("force", 60);
	set_skill("unarmed", 50);
	set_skill("dodge", 60);
	setup();
	carry_object(__DIR__"obj/cloth")->wear();
	carry_object(__DIR__"obj/shoe")->wear();
}

int accept_fight(object me)
{
	command("say ?????ӷ???ƶɮ?书??΢??ʩ????Ҫ????????Ц??\n");
	return 0;
}
