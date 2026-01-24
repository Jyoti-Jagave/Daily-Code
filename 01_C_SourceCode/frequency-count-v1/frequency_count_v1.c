#include <stdio.h>

int main(void)
{
	int a[10] = { 10, 20, 30, 10, 20, 10, 10, 20, 50, 60 };
	int i;
	int k;
	int cnt;

	i = 0;
	while (i < 10)
	{
		k = 0;
		cnt = 0;
		while (k < 10)
		{
			if (a[k] == a[i])
			{
				cnt = cnt + 1;

			}
			k = k + 1;
		}
		printf("Element %d : Frequency Count = %d\n", a[i], cnt);
		i = i + 1;
	}

	return (0);
}