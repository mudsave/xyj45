// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// create by snowcat.c 12/8/1997

inherit ROOM;

void create ()
{
  set ("short", "�Ϲ���");
  set ("long", @LONG

һ�������������һ���ŵ���𣬿�������Ÿ������ʵĹ�
���������ۡ���ʱ��·�˽���������˹Ϲ��꣬����һЩˮ��
���ࡣ

LONG);

  set("exits", ([
        "east"   : __DIR__"jiedao65",
      ]));
  set("objects", ([
        __DIR__"npc/zhang"   : 1,
      ]));

  setup();
}

