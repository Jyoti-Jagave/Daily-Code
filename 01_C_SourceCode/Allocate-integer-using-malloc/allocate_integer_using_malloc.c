#include <stdio.h>
#include <stdlib.h>

int* allocate_integer();

int main(void)
{
	int* p_new_int = NULL;

	puts("start:main()");
	p_new_int = allocate_integer();

	*p_new_int = 1000;
	printf("*p_new_int=%d\n", *p_new_int);

	free(p_new_int);
	p_new_int = NULL;

	puts("return:main()");

	return (0);
}

int* allocate_integer()
{
	int* p = NULL;

	puts("start:allocate_integer()");

	p = (int*)malloc(sizeof(int));

	if (p == NULL)
	{
		puts("Error in allocating memory for integer.exiting from app.");

		exit(-1);
	}
	puts("return:allocate_integer()");

	return (p);
}