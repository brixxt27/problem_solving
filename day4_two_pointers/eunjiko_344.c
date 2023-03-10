#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void reverseString(char* s, int sSize){
    char* ss;
    int size = 0;

    ss = malloc(sizeof(char)* sSize + 1);
    ss[sSize--] = '\0';
    while(1)
	{
		if (sSize < 0)
			break;
        ss[sSize--] = s[size++];
	}
	strncpy(s, ss, strlen(ss));
	free(ss);
	//for (int i = 0; i < 4; i++)
	//{
	//	s[i] = ss[i];
	//}
}

int main(void)
{
	char*	str;

	str = malloc(sizeof(char) * 6);
	str[0] = 'h';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = '\0';
	printf("str: %s\n", str);
	reverseString(str, strlen(str));
	printf("str: %s\n", str);
}
