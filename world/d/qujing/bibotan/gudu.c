// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
#include <room.h>
inherit ROOM;

int do_dive();
void create ()
{
  set ("short", "�Ŷɿ�");
  set ("long", @LONG

�������Ǳ̲�̶��һ���ɿڣ�������̶����ˮ�֣������İ��շ�
��Ǩ�����У��ɿڱ�ķ�����������ˮ��ֻ������ɢɢ����ľͷ
���ţ��ƺ�һ����˾Ϳ��Ʒ���Զ��������һС������Ҳ��ľï
ʢ��
LONG);

//  set("objects", ([ /* sizeof() == 1*/ 
//  __DIR__"npc/erlang" : 1,
//]));
  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"xiaolu1",
  "west" : __DIR__"xiaolu3",
]));

  setup();
}

void init()
{
    add_action("do_dive", "dive");
}
int do_dive()
{       object me;
        me=this_player();
            if((!present("bishui zhou", me)) &&
       (!((string)me->query("family/family_name")=="��������")))
                return
notify_fail("��һ����������ˮ�����\n\n��û�����ͱ���ð�����ֻ�øϽ����ϰ�����\n");
                message_vision("$Nһ����������ˮ�У�Ȼ�󲻼��ˣ�\n", me);
                me->move("/d/qujing/bibotan/tandi3");
     message_vision("$N���˹�����\n", me);
                return 1;
}
