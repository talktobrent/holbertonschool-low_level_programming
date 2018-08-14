#include <stdio.h>

/**
 * before - prints before main executed
 */


__attribute__ ((constructor))
void before(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
