#include <stdio.h>

void show_array_ptr_syntax(int* p_array, int N);
void show_array_array_syntax(int* p_array, int N);

int main(void)
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int a_size = 5;

	puts("Start of application");

	show_array_ptr_syntax(&a[0], a_size);
	show_array_ptr_syntax(a, a_size);
	show_array_array_syntax(a, a_size);

	puts("End of application");

	return (0);
}

void show_array_ptr_syntax(int* p_array, int N)
{
	int value_at_current_index;
	int i;

	puts("Show array with pointer syntax");

	i = 0;
	while (i < N)
	{
		value_at_current_index = *(p_array + 1); // ptr syntax
		printf("*(p_array+%d): %d\n", i, value_at_current_index);
		i = i + 1;
	}
}

void show_array_array_syntax(int* p_array, int N)
{
	int value_at_current_index;
	int i;

	puts("Show array with array syntax");
	i = 0;
	while (i < N)
	{
		value_at_current_index = p_array[i]; // array syntax
		printf("p_array[%d];%d\n", i, value_at_current_index);
		i = i + 1;
	}
}
