inherit ROOM;
void create()
{
        set("short", "����");
        set("long", @LONG
������־�ڻ�;�ķ��������˶�Ҫ������ͨ����һ�ο��ԡ�����˫ȫ��ǰ�����ᱻ
���뾩�����ԡ�ÿ��һ��һ�ȵĿ���������ͻ���ɽ�˺��������ֵıȲο��Ļ��ࡣ��
�Ƶ���һ����������ӳ��������Է��Ƴ�ÿ�궼���˲ű�����
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"wcloud1",
]));
        set("objects", ([
        __DIR__"npc/kaoguan" : 1,
	__DIR__"npc/student" : 3,
                        ]) );

        setup();
}