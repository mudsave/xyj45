// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG

��������ǰ������ľ�������������������������Ů�˵���
Ʒ��Ҳ��Щ������С���ա���̨��վ��λ��֦��չ��Ů�ϰ壬Ц
ӯӯ�Ŀ����㡣�������������������Ͻ�����æ�Ŵ��ơ�
LONG);

  set("objects", ([ /* sizeof() == 1*/ 
  __DIR__"npc/ayina" : 1,
]));
//  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"westmarket",
]));

  setup();
}
