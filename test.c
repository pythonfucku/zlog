#include "zlog.h"
#include <stdio.h>

int main()
{
	int rc;
	zlog_category_t *zc;
	rc = dzlog_init("./test.conf","my_cat");
	if(rc){
		printf("init failed\n");
		zlog_fini();
		return -1;
	}

	int a = 10;
	car str[112] = "123123123";
	dzlog_info("hello");
	dzlog_debug("test");
	zlog_fini();
	return 0;
}
