// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// boots.c

#include <armor.h>

inherit EQUIP;

void setup()
{
   if( clonep(this_object()) ) return;

   set("armor_type", TYPE_BOOTS);
   if( !query("armor_apply/dodge")
   &&   weight() > 3000 )
     set("armor_prop/dodge", - weight() / 3000 );
}