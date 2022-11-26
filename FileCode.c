#include <cstdio>
#include<stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <access.idl>
#include <cerrno>


int access(const char* file, const char* status) {
    return -1;
}

void fopen_with_toctou(const char* file) {
    if (access(file, "F_OK") == -1 && errno == ENOENT) {
        // the file doesn't exist
        // it is now created in order to write some data inside
        FILE* f = fopen(file, "w"); // Noncompliant: a race condition window exist from access() call to fopen() call calls
        if (NULL == f) {
            /* Handle error */
        }

        if (fclose(f) == EOF) {
            /* Handle error */
        }
    }
}

void open_without_toctou(const char* file) 
{
    int fd = open(file, O_CREAT | O_EXCL | O_WRONLY);
    if (-1 != fd) 
    {
        FILE* f = fdopen(fd, "w");  // Compliant
    }
}

