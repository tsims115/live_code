#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
	int array[3] = {0, 1, 2};
	int *array1 = malloc(sizeof(int) * 3);
	int *array2 = malloc(sizeof(int) * 3);
	int **array_of_arrays = malloc(sizeof(int) * 3 * 3);
	int i, j;

	array1[0] = 3;
	array1[1] = 4;
	array1[2] = 5;
	array2[0] = 6;
	array2[1] = 7;
	array2[2] = 8;
	printf("Array address: %p\n", &array);
	printf("Pointer Value: %p\n", array1);
	printf("Pointer dereferance: %d\n", *array1);
	for(i = 0; i < 3; i++)
	{
		printf("%d, ", array1[i]);
	}
	printf("\n");
	for(i = 0; i < 3; i++)
        {
                printf("%d, ", *(array1 + i));
        }
        printf("\n");
	for(i = 0; i < 3; i++)
        {
                printf("%d, ", *array1);
		array1++;
        }
	printf("\n");
	array1 += -3;
        printf("\n");

	array_of_arrays[0] = array;
	array_of_arrays[1] = array1;
	array_of_arrays[2] = array2;

	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			printf("%d, ", array_of_arrays[i][j]);
	printf("\n");
}
