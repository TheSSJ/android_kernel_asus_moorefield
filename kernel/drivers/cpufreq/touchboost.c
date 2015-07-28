#include <linux/kernel.h>
#include <linux/touchboost.h>

void (*set_tboost)(void);

static void touchboost_main(void)
{
	set_tboost = &tboostdummy;
	return;
}

static void tboostdummy(void)
{
	printk("Call to dummy function_touchboost");
}

