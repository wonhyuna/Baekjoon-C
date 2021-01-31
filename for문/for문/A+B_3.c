#include <stdio.h>
int main()
{
    int n, A[100], B[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &A[i], &B[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", A[i] + B[i]);
    }
}