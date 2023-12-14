#include <stdio.h> 

int main() 
{
	char str[] = "Hallo Welt	Das ist ein normaler String";
	int i = 0; 
	
	while (str[i] != '\0') 
	{
		printf("Buchstaben: %c, ASKII-Wert: %d\n", str[i], str[i]);
		i++;
	}
	printf("Caracters in the string: %d\n", i);
}
