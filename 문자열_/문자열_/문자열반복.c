#include <stdio.h>
#include <string.h>

void func(char S[], int R)
{
	for (int i = 0; i < strlen(S); i++) {
		for (int j = 0; j < R; j++) {
			printf("%c", S[i]);
		}
	}
	printf("\n");
}
int main()
{
	int T, n = 0;
	char str[21];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		scanf("%s", str);
		func(str, n);
	}
}