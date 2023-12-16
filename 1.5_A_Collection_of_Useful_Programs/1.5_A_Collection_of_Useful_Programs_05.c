#include <stdio.h>
/*Exercise 1-6*/

int counter; 

int main()
{
	int i;
	char user_input[] = "Hallo Welt!\n";
	i = counter = 0; 

	printf("Your enter your text please.\n\n");
	
	
	if (user_input == "NULL")
	{
		printf("[-] No user input, pease try once more!");
		return 1;
	}
	while(user_input[i] != '\0')
	{
		if (user_input[i] == ' ' || user_input[i] == '\t' || user_input[i] == '\n')
		{
			printf("\n");
			++counter;
		}
		++i;				
	}
	printf("blanks, tabs and newlines are: %d\nAnd the set consists of %d caracters", counter, i);
	return 0;
}
