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
