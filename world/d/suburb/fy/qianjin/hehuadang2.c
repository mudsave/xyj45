inherit ROOM;
void create()
{
        set("short", "?ɻ???");
        set("long", @LONG
??԰???棬????һ?????????????ɻ?????ÿ????ʱ?????̼䷢??????????ʤ????
?غ?????ܽ?أ?????????ɫ??????ʢ??֮?գ????????????ף?????Ϯ?ˣ?С?۵???
???⣬????????????б??΢???????????ɣ??ݺ????ɡ?
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "northwest" : __DIR__"bridge",
  "south" : __DIR__"hehuadang1",
]));
	set("outdoors","fengyun");
        set("objects", ([
        __DIR__"npc/ouseller" : 1,
                        ]) );

        setup();
        replace_program(ROOM);
}
