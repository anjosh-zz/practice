#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int scan(char *s, int l)
{
	char *p = s;
#define YYCTYPE		char
#define YYCURSOR	p
#define YYLIMIT		(s+l)
#define YYFILL(n)

	for(;;)
	{
/*!re2c
	re2c:indent:top = 2;
	("0" | [1-9][0-9]*)
	{
		printf("Num: %c\n", n); continue;
	}
	"+"					{ printf("+\n"); continue; }
	"-"					{ printf("-\n"); continue; }
	"\000"				{ printf("EOF\n"); return 0; }
	[^]					{ printf("ERR\n"); return 1; }
*/
	}
}




int main(int argc, char **argv)
{
	int i = 0;
	for(i = 0; i < argc; i++) {
		printf("argv %d: %s\n", i, argv[i]);
	}
	if(argc > 1) {
		return scan(argv[1], strlen(argv[1]));
	} else {
		fprintf(stderr, "%s <expr>\n", argv[0]);
		return 1;
	}
}
