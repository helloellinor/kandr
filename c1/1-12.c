#include <stdio.h>
#include <stdbool.h>

int main()
{
	int c;
	bool insidew = false;
		
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			insidew = false;
			printf("\n");
		}
		else if (insidew == false) {
			insidew = true;
			putchar(c);
		}
		else 
			putchar(c);
	}
}
