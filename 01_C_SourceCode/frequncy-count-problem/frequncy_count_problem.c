#include <stdio.h>
#include <stdio.h>

#define YES 1
#define NO 0

void print_frequency_count(int* p_array, int N);

int main(void)
{
	int array[15] = { 5, 4, 5, 5, 3,
		              3, 1, 1, 1, 5,
		              2, 3, 1, 4, 5 };
	print_frequency_count(&array[0], 15);

	return (0);
}

void print_frequency_count(int* p_array, int N)
{
	int i;
	int k;
	int current_value;
	int frequency_count_of_current_value;
	int is_current_value_found;

	i = 0;
	while (i < N)
	{
		current_value = *(p_array + i);
		is_current_value_found = NO;
		k = 0;
		while (k < i)
		{
			if (*(p_array + k) == current_value)
			{
				is_current_value_found = YES;
				break;
			}
			k = k + 1;
		}
		if (is_current_value_found == YES)
		{
			i = i + 1;
			continue;
		}
		frequency_count_of_current_value = 0;
		k = i;
		while (k < N)
		{
			if (current_value == *(p_array + k))
				frequency_count_of_current_value += 1;
			k = k + 1;
		}

		printf("UNIQUE ELEMENT:%D, FREQUENCY COUNT:%d\n", current_value,
			frequency_count_of_current_value);
		i = i + 1;
	}

}
