#include <stdio.h>

#define MAXCHAR 128

int main()
{
	int c, i;
	int maxvalue;
	int cc[MAXCHAR];

	for (i = 0; i < MAXCHAR; ++i)
		cc[i] = 0;
	
	while ((c = getchar()) != EOF)
		if (c < MAXCHAR)
			++cc[c];



