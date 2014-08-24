/*********************************
$ gcc test.c strbuf.c -o executable
**********************************/

#include "strbuf.h"

int main(void)
{
	struct strbuf name = STRBUF_INIT;
	int value = 701;
	
	strbuf_addstr(&name, "a string");
	strbuf_addf(&name, " and a formatted string: param=%d", value);

	printf("1. %s\n", name.buf);
	printf("2. %d\n", name.len);

	strbuf_release(&name);
	return 0;
}
