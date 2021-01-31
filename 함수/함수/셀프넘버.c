#include <stdio.h>

int sum(int n);

int main()
{
    int arr[10001];
    for (int i = 1; i < 10001; i++) {
        if (sum(i) < 10001)
            arr[sum(i)] = 1;
    }
    for (int i = 1; i < 10001; i++)
    {
        if (arr[i] != 1)
            printf("%d\n", i);
    }
    return 0;
}

int sum(int n)
{
    int result = n;
    while (n != 0)
    {
        result += n % 10;
        n /= 10;
    }
    return result;
}