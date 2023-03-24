#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void non_secure(char* str)
{
	gets(str);
}

void secure(char* str)
{
	gets_s(str, sizeof(str));
}

static bool IsShorterStr(char* input)
{
    char randomstr[15];
    strcpy(randomstr, input);

    if (strlen(randomstr) > strlen(input))
        return true;
    else
        return false;
}
