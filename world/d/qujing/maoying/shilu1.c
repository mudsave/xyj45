// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// create by snowcat.c 12/8/1997

inherit ROOM;

void create ()
{
  set ("short", "ʯ·");
  set ("long", @LONG

ɽ����һ��ʯ��·������ȥ�����ŵ�������Щ�����ʯ·�߻�
��������ݴ��������̸����ڣ���֪ͨ��δ���Զ���з�͵�
�ĺ�У�������Ұѻ���ɡ�

LONG);

  set("exits", ([
        "southwest"   : __DIR__"shilu2",
        "north"   : "/d/qujing/tianzhu/dalu5",
      ]));
  set("outdoors", __DIR__);

  setup();
}


