// Room: "/d/oldpine/npath3.c

inherit ROOM;

void create()
{
	set("short", "�ּ�С·");
	set("long", @LONG
������������һ���ּ��С·�ϣ�С·�����ƺ�ͨ��һ���յأ���
�ӵ��������þ����ĵģ�С·���Ե�����Ҳ�����ߵİ�С����������
��Ӫ�����������ӡ�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : "/d/suburb/es/oldpine/clearing",
  "northwest" : "/d/suburb/es/oldpine/npath2",
]));
	set("outdoors", "oldpine");

	setup();
	replace_program(ROOM);
}