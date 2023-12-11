#include <stdio.h>

main()
{

	float fahr, cel;
	fahr = 0; 

	while (fahr <= 300)
	{
		cel = (5.0/9.0) * (fahr - 32.0);
		printf("%4.0f %6.1f\n", fahr, cel);
		fahr += 20;
	}	

}
