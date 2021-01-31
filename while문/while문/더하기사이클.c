#include <stdio.h>
int main()
{
    int n, total, count = 0;
    int first, second, third;
    scanf("%d", &n);
    int result = n;
    while (1)
    {
        first = n / 10;
        second = n % 10;
        third = first + second;
        total = second * 10 + third % 10;
        n = total;
        count++;

        if (result == n)
            break;
    }
    printf("%d", count);

}