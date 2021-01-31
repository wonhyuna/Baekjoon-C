#include <stdio.h>
int han(int n);

int main()
{
	int num;
	scanf("%d", &num);
	int result = han(num);
	printf("%d", result);
}

int han(int n)
{
	int count = 0;
	if (n < 100)
		return n;

	else
	{
		int hund, ten, one;

		for (int i = 100; i <= n; i++)
		{
			hund = i / 100;
			ten = (i % 100) / 10;
			one = i % 10;
			if (hund - ten == ten - one)
				count++;
		}
		return (99 + count);
	}
}