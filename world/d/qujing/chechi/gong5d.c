// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// created by snowcat.c 10/21/1997
// room: /d/qujing/chechi/gong5d.c

inherit ROOM;

void create ()
{
  set ("short", "��ǽ");
  set ("long", @LONG

��ǽ��ΰ���ô�ʯ��������ɣ�����Ʈ�Żʼ���졣ÿ��һ�ɾ�
����һ����¥���������ڱ���ìѲ�ߡ�ǽ����һ��ʯ·����ǽ��
��Զ����

LONG);

  set("exits", ([
        "west"         : __DIR__"gongmen",
        "east"         : __DIR__"gong5e",
      ]));

  set("objects", ([
        __DIR__"npc/weishi"        : 2,
      ]));

  set("outdoors","/d/qujing/chechi");
  setup();
}
