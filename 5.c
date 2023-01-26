#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number, i = 0, j = 0;
	char fail;
	
	do 
	{
		printf("Enter a number: ");
		if (scanf("%d", &number))
		 {
			break;
		}
		else if (scanf("%c%*[^\n]", &fail))
		{
			printf("That is not a number. ");
		}
	} while (fail);

	if (number == 0)
	{
		printf("%d\n", number);
		exit(0);
	}
	
	do
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%d + ", i);
			j += i;
		}		
		
		i++;

		if (i == number)
		{
			j += i;
			printf("%d = ", i);
		}
	} while (i != number);

	printf("%d\n", j);

	return 0;
}
