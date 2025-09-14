
#include <zephyr/sys/printk.h>


#define SW0_NODE	DT_ALIAS(sw0)

int main(){

    printk("Node label: %s\n", DT_NODE_FULL_NAME(SW0_NODE));

    return 0;
}
