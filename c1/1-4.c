#include <stdio.h>

int main()
{
	float cels, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	cels = lower;
	printf("C\tF\n");
	while (cels <= upper) {
		fahr = (9.0/5.0) * (cels) + 32.0;
		printf("%3.0f %6.1f\n", cels, fahr);
		cels += step;
	}
	return 0;
}
