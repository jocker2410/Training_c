#include <stdio.h> 

main() 
{
	char str[] = "Hallo Welt 	Das ist ein \ntest			te\nst";

	int i, nextL, space, tab, count_char;
	i = nextL = space = tab = count_char = 0;
	while(str[i] != '\0')
	{
		if ( str[i] == '\n')
		{
			++nextL;
			printf("Gate a new line");
		}
		if (str[i] == '\t')
		{
			++tab;
			printf("Gate a Tab sine");
		}
		else if ( str[i] == ' ')
		{
			++space;
			printf("space detected");
		}
			
		printf("Char %c, Int %d\n", str[i], i);
		++i;
	}
	
	count_char = i - space;
	printf("\n\nTab: %d, \nSpace: %d, \nLines: %d\nCharacters: %d, \nString length: %d\n\n", tab, space, nextL, count_char, i);

}
