#include<stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <cerrno>


int access(const char* file, const char* status) {
    return -1;
}

void fopen_with_toctou(const char* file)
{
    if (access(file, "F_OK") == -1 && errno == ENOENT) 
    {

        FILE* f = fopen(file, "w"); // Noncompliant
        if (NULL == f) {
            /* Handle error */
        }

        if (fclose(f) == EOF) {
            /* Handle error */
        }
    }
}

void open_without_toctou(const char* file) {
    FILE* f = fopen(file, "wx"); // Compliant
    if (NULL == f) {
        /* Handle error */
    }
    /* Write to file */
    if (fclose(f) == EOF) {
        /* Handle error */
    }
}

