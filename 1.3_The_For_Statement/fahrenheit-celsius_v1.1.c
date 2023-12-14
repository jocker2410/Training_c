#include <stdio.h>


void	convert(float cel);

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
	for (fahr = 0.0; fahr <= 300.0; fahr += 20.0)
	{
		cel = (5.0/9.0) * (fahr-32.0);
		printf("%4.0f\t%6.1f\n", fahr, cel);
	}
}
