#include <stdio.h>
int main()
{
    int num[10], n = 0;
    int arr[42] = { 0, };
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        arr[num[i] % 42]++;
    }
    for (int i = 0; i < 42; i++)
    {
        if (arr[i] != 0)
            n++;
    }
    printf("%d", n);

}