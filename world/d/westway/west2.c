// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// create by snowcat.c 4/8/1997
// room: /d/westway/west2.c

inherit ROOM;

void create ()
{
  set ("short", "��ٵ�");
  set ("long", @LONG

����һ��������ֱ�Ĵ�ٵ�������ݵ���ʮ�����ۡ�����ͨ��
��ǿ����൱�ڽ��������һ����������ֱ����ƹ��������ǡ�

LONG);

  set("exits", ([
        "east" : __DIR__"west1",
        "west" : __DIR__"west3",
      ]));
  set("outdoors", __DIR__);

  setup();
}





