#include <stdio.h>
int main()
{
    int num[9], max = 0, count;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] > max)
        {
            max = num[i];
            count = i;
        }
    }
    printf("%d\n%d", max, count + 1);
}