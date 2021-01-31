#include <stdio.h>
int main()
{
    int A, B, C, result, arr[10] = { 0, };
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    result = A * B * C;
    int n;
    while (result != 0)
    {
        n = result % 10;
        arr[n]++;
        result /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
}