#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static int CalculateArray( int array[])
{
    int value;
    int length = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < length; i++)
    {
        value++;
    }
    return value;
}

static void CpyString(char* input)
{
    char string_value[10];
    char* temp;
    bool pass;

    temp = input[1] ? input[1] : '\0';
    strcpy(string_value, temp);
        
}

/* TO DO */
static bool PasswordOk(char* input)
{
    char buff[20];
    int pass = 0;

    gets(buff);
    if (strcmp(buff, "hardcodedpassword"))
    {
        //Do nothing
    }
    else
    {
        pass = 1;
    }

    if (pass)
        return true;
    else
        return false;
}


