#include<stdio.h>
#define N 101
int main(void)
{
	int count = 0, plus = 0;
	int a[N] = { 0 }, b[N] = { 0 }, temp, n;
	while (scanf("%d%d", &n, &temp))
	{
		if (temp != 0)
		{
			a[n] += temp;
			b[n] = n;
		}
		if (n == 0)
			count++;
		if (count == 2)
			break;
	}
	for (int i = 100; i > 1; i--)
	{
		if (b[i] != 0)
		{
			if (plus != 0)
				if (a[i] < 0)
					;
				else
				printf("+");
			plus++;
			printf("%dx%d", a[i], b[i]);
		}
	}
	if (a[1] != 0 && b[1] != 0)
	{
		if (plus != 0)
			if (a[1] < 0)
				;
			else
			printf("+");
		printf("%dx", a[1]);
		plus++;
	}
	if (plus != 0)
		if (a[0] < 0)
			;
		else
		printf("+");
	if(plus==0)
		printf("%d", a[0]);
	if(plus!=0&&a[0]!=0)
		printf("%d", a[0]);
	return 0;
}