#include <stdio.h>
int main()
{
    int n, x;
    int a[10000];
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < x)
        {
            printf("%d ", a[i]);
        }
    }
}