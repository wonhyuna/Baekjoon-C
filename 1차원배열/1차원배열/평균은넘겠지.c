#include <stdio.h>

int main()
{

	int c, n, score[1000], up = 0;
	double sum = 0, avg, result;
	scanf("%d", &c);
	for (int i = 0; i < c; i++)
	{
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &score[j]);
			sum += score[j];
		}
		avg = sum / n;
		for (int k = 0; k < n; k++)
		{
			if (score[k] > avg)
				up++;
		}
		result = (double)up / n * 100;
		printf("%.3lf%%\n", result);
		up = 0, sum = 0;
	}
}