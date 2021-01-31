#include <stdio.h>
#include <string.h>

int main()
{
	char ans[101] = { 0, };
	char arr[26];
	int result[26];
	scanf("%s", ans, 101);
	for (int j = 'a'; j <= 'z'; j++)
	{
		arr[j - 97] = j;
	}

	for (int i = 0; i < 26; i++)
	{
		result[i] = -1;
	}

	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (ans[i] == ans[j])
				ans[i] = " ";
		}
	}

	for (int i = 0; i < strlen(ans); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (ans[i] == arr[j])
			{
				result[j] = i;		// ans[5]=o ¶û arr[14] = o¶û °°À¸¸é result[14] = 5¸¦ ³Ö¾î	
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", result[i]);
	}
}