#include "main.h"
#include <stdio.h>
/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: prints the sum of the two diagonals
 */


 
void print_diagsums(int *a, int size)
{
	int i;
	int primary = 0;
	int secondary = 0;

	for (i = 0; i < size; i++)
	{
		primary += a[i * size + i];
		secondary += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", primary, secondary);
}
