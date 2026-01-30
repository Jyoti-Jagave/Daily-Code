#include <stdio.h>
#include <stdlib.h>

void print_sub_arrays(int* a, int N);

int main(void)
{
	int a[8] = { 5, 10, 15, 20, 25, 30, 35, 40 };
	int N = 8;

	print_sub_arrays(a, N);

	return (0);

}

void print_sub_arrays(int* a, int N)
{
	int i, j, k;

	for (i = 0; i <= (N - 1); ++i)
	{
		for (j = i; j <= (N - 1); ++j)
		{
			printf("SHOWING SUBARRAY[%d:%d]:\n", i, j);
				for(k = i; k <= j; ++k)
			printf("\ta[%d]:%d\n", k, a[k]);
		}
	}
}