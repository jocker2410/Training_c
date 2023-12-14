#include <stdio.h>


void	convert(float cel);

#define LOWER 0.0
#define UPPER 300.0
#define STEP 20.0

int main(void) 
{
	float cel;
	cel = 0.0; 

	printf("Print Fahrenheit-Celsius table\n F:\tC°\n");
	convert(cel);

	return 0;
}

void	convert(float cel)
{
	float fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	{
		cel = (5.0/9.0) * (fahr-32.0);
		printf("%4.0f\t%6.1f\n", fahr, cel);
	}
}
