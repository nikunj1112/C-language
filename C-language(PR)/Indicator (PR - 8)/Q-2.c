#include <stdio.h>

void cube(int *ptr, int total)
{
	int i;
	for (i = 0; i < total; i++)
	{
		*ptr = (*ptr) * (*ptr) * (*ptr); // cube
		ptr++;							
	}
}

int main()
{
	int n, i, j;

	printf("Enter array's size = ");
	scanf("%d", &n);

	int a[n][n];

	printf("Enter array elements:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	cube(&a[0][0], n * n); // pointer + total elements

	printf("\nCubes of array elements:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
