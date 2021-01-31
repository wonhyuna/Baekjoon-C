#include <stdio.h>
#include <string.h>

int main()
{
	char sen[1000000] = { 0, };
	int arr[26] = { 0, }, max = -1, count = 0, index;
	scanf("%s", sen, 1000000);
	int j = 0;
	while (sen[j] != '\0')
	{
		if (sen[j] >= 97 && sen[j] <= 122)
			sen[j] -= 32;

		for (int i = 'A'; i <= 'Z'; i++)
		{
			if (sen[j] == i)
				arr[i - 65]++;
		}
		j++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}

	}

	for (int i = 0; i < 26; i++)
	{
		if (max == arr[i])
			count++;
	}
	if (count > 1)
	{
		printf("?");
	}
	else
		printf("%c", index + 65);

	//max를 찾았어 그래서 arr[i]중에서 max와 같은게 몇개인지 세는거야	
}