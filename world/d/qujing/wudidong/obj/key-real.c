// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// key.c
// created by mes, updated 6-20-97b pickle

inherit ITEM;

void create()
{
  set_name("��Կ��", ({ "tie yaoshi","key","iron key", "yaoshi" }));
  set_weight(200);
  if( clonep() )
    set_default_object(__FILE__);
  else {
    set("long", "һ������ͨͨ��Կ��. \n");
    set("unit", "��");
    set("material", "iron");
    set("value", 0);
    set("no_give", 1);
    set("name_recognized", "real key");
  }
  setup();
}

void init ()
{
  call_out ("destruct_me",300,this_object());
}

void destruct_me (object me)
{
  destruct (me);
}
