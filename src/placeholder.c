#include<string.h>
#include<stdio.h>

void nonValid_placeholder(void) 
{
	char buffer[10];
	scanf("%s", buffer);
}

void Valid_placeholder(void)
{
	char buffer[10];
	scanf("%9s", buffer);
}