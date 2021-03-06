inherit NPC;

string *first_name = ({ "??","Ǯ","??","??","??","??","֣","??","??","??",
        "??","??" });
string *name_word = ({ "˳","??","??","??","??","??","??","??","־","??",
        "Т","??","??","??","??","??","??","ʢ","ʤ","??","??","??","ͬ",
        "??","??","??","??","¡","??","??","??","??","??" });

void create()
{
	set_name(first_name[random(sizeof(first_name))] + name_word[random(sizeof(name_word))],
		 ({ "trainer"}));
	set("title", "???鸮??Ժ");
        set("gender", "????");
        set("age", 30+random(30)); 

        set("attitude", "peaceful");

        set("str", 20+random(15));
        set("int", 20+random(15));
	set("cor", 20+random(35));
	set("con", 20+random(10));

	set("food", 1000);
	set("water", 1000);

        set("force", 400+random(400));
        set("max_force", 400 + random(200));
        set("force_factor", 3+random(3));

	set("chat_chance", random(40));
	set("chat_msg", ({
		(: random_move :),
		}) );

        set("combat_exp", 2000+random(50000));

        set_skill("blade", 30+random(50));
        set_skill("shortsong-blade", 40+random(60));
        set_skill("force", 30+random(50));
        set_skill("wu-shun", 40+random(40));
        set_skill("parry", 30+random(50));
        set_skill("dodge", 50+random(30));
        set_skill("fall-steps", 40+random(40));

        map_skill("blade", "shortsong-blade");
        map_skill("parry", "shortsong-blade");
        map_skill("force", "wu-shun");
        map_skill("dodge", "fall-steps");

        setup();

        carry_object(__DIR__"obj/blade")->wield();
}


