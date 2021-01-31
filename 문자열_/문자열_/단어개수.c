#include <stdio.h>
int main()
{
	char word[1000001] = { 0, };
	gets(word);
	int count = 1;
	int i = 0;
	while (word[i] != '\0')
	{
		if (word[i] == ' ' && word[i + 1] != '\0')
			count++;
		i++;
	}
	if (word[0] == ' ' || word[0] == '\0')
	{
		count--;
	}

	printf("%d", count);
}