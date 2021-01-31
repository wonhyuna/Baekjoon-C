#include <stdio.h>
int main()
{
    int h, m;
    scanf("%d %d", &h, &m);
    int total = h * 60 + m;
    int alarm, hour, min;
    if (45 <= total && total <= 1439)
    {
        alarm = total - 45;
    }

    else
    {
        alarm = total + 1440 - 45;
    }
    hour = alarm / 60;
    min = alarm % 60;
    printf("%d %d", hour, min);
}