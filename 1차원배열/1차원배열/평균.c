#include <stdio.h>
int main()
{
    int N, M = -1;
    double sum = 0, avg;
    scanf("%d", &N);
    double score[1000];
    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &score[i]);
        if (score[i] > M)
            M = score[i];
    }
    for (int i = 0; i < N; i++)
    {
        score[i] = score[i] / M * 100.0;
        sum += score[i];
    }
    avg = sum / N;
    printf("%.2lf", avg);
}