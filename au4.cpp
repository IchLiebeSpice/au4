// au4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	char str[256];
	int i = 0;
	gets_s(str);
	int len = strlen(str);
	printf("%s\n", str);

	int is_word = 1;
	for (i = 0; i < len && is_word; i++)
	{
		is_word = isalpha(str[1]);
	}
	if (!is_word) {
		printf("%s\n", "Invalid");
	}
	else {
		printf("%s\n", "Your string has alphabetical letters");
	}
	return 0;
}
