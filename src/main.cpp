#include <iostream>
#include<stdio.h>
#include <fcntl.h>
#include <stdlib.h>


using namespace std;

int main(int argc, char* argv[]) {
  return 0;
}

/*void nonComplaintCode()
{
    char array[10];
    void const* pos = memchr(array, '@', 42);
}*/

void ComplaintCode()
{
    char array[10];
    void *pos = memchr(array, '@', 10);
}





