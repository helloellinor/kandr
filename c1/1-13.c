#include <stdio.h>

#define MAXCOUNT 9
#define IN 1
#define OUT 0

int main()
{
	int c, lc, state;
	
	lc = state = 0;	

	int counts[MAXCOUNT];
	
	for (int i = 0; i <= MAXCOUNT; ++i)
		counts[i] = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			++counts[lc];
			lc = 0;
		} else if (state == OUT) {
			state = IN;
			++lc;
		} else
			++lc;
	}

	for (int i = 1; i <= MAXCOUNT; ++i) {
		printf("%d: ", i); 
		for (int j = 0; j < counts[i]; ++j)
			putchar('o');
		putchar('\n');
	}
}
