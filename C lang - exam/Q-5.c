// Q-5 ) Implement a C program to print the following pattern using nested for loop:
// _ _ _ _ *
// _ _ _ * *
// _ _ * * *
// _ * * * *
// * * * * *

#include <stdio.h>

void main()
{
	int i, j, d;
	for (i = 1; i <= 5; i++)
	{
		for (d = 5; d > i; d--)
		{
			printf("_ ");
		}
		for (j = i; j >= 1; j--)
		{
			printf("* ", j);
		}
		printf("\n");
	}
}