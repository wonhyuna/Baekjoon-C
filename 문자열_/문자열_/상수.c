#include <stdio.h>
int main()
{
	int a, b;
	int n1, n2;
	scanf("%d %d", &a, &b);
	n1 = (a % 10) * 100 + ((a % 100) / 10) * 10 + a / 100;
	n2 = (b % 10) * 100 + ((b % 100) / 10) * 10 + b / 100;
	if (n1 >= n2)
		printf("%d", n1);
	else
		printf("%d", n2);
}