// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// zhadao.c

#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("ա��", ({ "zhadao", "blade", "dao" }) );
        set_weight(3500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "һ������ա�ݣ���С��֦��ա����\n");
                set("unit", "��");
       set("wield_msg", "$N���һ��$n���������У���Ҳ�������ݡ�\n");
       set("unwield_msg", "$N��������$n���ѵ�Ҫ���سɷ�\n");
                set("value", 400);
                set("material","wood");
        }
        init_blade(20);
        setup();
}
