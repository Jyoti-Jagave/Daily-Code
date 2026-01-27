#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	void* p = NULL;

	while (1)
	{
		p = malloc(4096);
		if (p == NULL)
		{
			puts("Error in allocating memory. Good by Cruel World!");
			exit(-1);

		}
		memset(p, (65 + rand() % 26), 4096);
	}

	return (0);
}