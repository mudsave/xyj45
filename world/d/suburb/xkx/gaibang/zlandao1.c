// Room: /d/gaibang/zlandao1.c
// Date: Haa 96/03/22

#include <room.h>
inherit ROOM;




void create()
{
	set("short", "����");
	set("long", @LONG
����ؤ�� �������ܵĵ���ͨ��������ؤ�Ｘ����֮��Ѫ��ɡ� 
LONG
	);

	set("exits", ([
			"northeast" : __DIR__"zlandao2",
			"southwest" : __DIR__"undertre",
	]));

	setup();
	replace_program(ROOM);
}


