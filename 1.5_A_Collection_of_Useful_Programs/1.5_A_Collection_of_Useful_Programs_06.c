#include <stdio.h>
/*Exercise 1-7*/


int main()
{
	char str[30];
	int i; 
	i = 0;

	printf("Type your full name: \n");
	fgets(str, sizeof(str), stdin);

	
	while(str[i] != '\0')
	{
		printf("%c", str[i]);
		++i;
	}
	--i;
	printf("Num Char:%d", i);


}
