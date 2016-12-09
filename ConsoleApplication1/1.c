#include<stdio.h>
#include<stdlib.h>
#define N 101
int main(void)
{
	int count = 0, plus = 0;
	int a[N] = { 0 }, b[N] = { 0 }, temp, n;
	while (scanf("%d%d", &n, &temp))
	{
		a[n] += temp;
		b[n] = n;
		if (n == 0)
			count++;
		if (count == 2)
			break;
	}
	for (int i = 100; i > 0; i--)
	{
		if (plus != 0)
		{
			printf("+");

		}
	}
	system("pause");
	return 0;
}