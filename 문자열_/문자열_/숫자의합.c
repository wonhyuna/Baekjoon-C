#include <stdio.h>
int main()
{
	int n, sum = 0;
	char num[100];
	scanf("%d", &n);
	scanf("%s", num);
	for (int i = 0; i < n; i++)
	{
		sum += num[i] - '0';
	}
	printf("%d", sum);
}