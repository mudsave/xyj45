// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// by snowcat 11/6/1997
inherit ROOM;

void create()
{
  set ("short", "��ϼ��");
  set ("long", @LONG

��ϼ���ǳǱ�һ��������Ĵ��������������ഫ�����Ϲ�������
���γǱ�ҹ��ϼ���������Ȼ��ʥ���ﻳ̥����̫�ӣ��ʽ��˽���
��Ϊ��ϼ����ʾ���顣

LONG);

  set("exits", ([ 
    "west" : __DIR__"beixia4",
    "east" : __DIR__"beixia6",
  ]));
  set("outdoors", __DIR__"");
  setup();
}