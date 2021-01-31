#include <stdio.h>

int main()
{
	int n, count_O = 0, count = 0, sum = 0;
	char arr[80];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", arr, 80);
		int j = 0;
		while (arr[j] != '\0')
		{
			if (arr[j] == 'X')
			{
				count_O = 0;
				j++;
			}
			else
			{
				count_O++;
				count += count_O;
				j++;
			}
		}
		printf("%d\n", count);
		count_O = 0, count = 0;
	}
}