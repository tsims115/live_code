#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
	int array[] = {0, 1, 2};
	int *array1 = array;
	int *array2 = malloc(3);
	int **array_of_arrays = malloc(3 * 3);
	int i, j;

	printf("Array address: %p\n", &array);
	printf("Pointer value: %p\n", array1);
	printf("Pointer Address: %p\n", &array1);

	array1 = array2;
	array2[0] = 2;
	array2[1] = 3;
	array2[2] = 4;
	printf("array1 first element: %d\n", array1[0]);
	for (i = 0; i < 3; i++)
	{
		printf("%d ", array2[i]);
	}
	printf("\n");
	for(i = 0; i < 3; i++)
	{
		printf("%d ", *(array2 + i));
	}
	printf("\n");
	printf("%d ", *array2);
	array2++;
	printf("%d ", *array2);
	array2--;
	printf("%d\n", *array2);
	array1 = malloc(3);
	array1[0] = 5;
	array1[1] = 6;
	array1[2] = 7;

	array_of_arrays[0] = array;
	array_of_arrays[1] = array2;
	array_of_arrays[2] = array1;

	 printf("Array of arrays\n");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			printf("%d ", array_of_arrays[i][j]);
	printf("\n");
}
