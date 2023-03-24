#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>

int main(int argc, char* argv[])
{

}

void nonComplaintCode()
{
    char array[10];
    void const* pos = memchr(array, '@', 42);
}

void ComplaintCode()
{
    char array[10];
    void *pos = memchr(array, '@', 10);
}





