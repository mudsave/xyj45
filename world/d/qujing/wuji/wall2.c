// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// Room: /u/mimi/zhuziguo/wall.c  snowcat moved to /d/qujing/wuji
inherit ROOM;

void create()
{
  set ("short", "��ǽ��Χ");
  set ("long", @LONG

�����������Ĺ�ǽ��Χ���ߴ��ǽ��������ʯ�ݳɣ�ʮ�ֽ�ʵ���롣
��ǽ�Ϸ���һ����ͤ��¥��

LONG);

  set("exits", ([ /* sizeof() == 1 */
    "west" : __DIR__"wall",
    "east" : __DIR__"wall3",
  ]));
  set("objects", ([ /* sizeof() == 1 */
    __DIR__"npc/weishi" : 2,
  ]));
  set("outdoors", __DIR__"");                   
  setup();
}

int valid_leave (object who, string dir)
{
  object shi = present ("wei shi", environment(who));
  if (dir == "west" && shi && living (shi))
      return notify_fail (shi->query("name")+"�ȵ������У�\n");
  return ::valid_leave(who, dir);
}