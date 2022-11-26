#include <cstdio>
#include<stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <access.idl>
#include <cerrno>

void f(char* password, size_t bufferSize) {
    char localToken[256];
    init(localToken, password);
    memset(password, ' ', strlen(password)); // Noncompliant, password is about to be freed
    memset(localToken, ' ', strlen(localToken)); // Noncompliant, localToken is about to go out of scope
    free(password);
}

void f(char* password, size_t bufferSize) {
    char localToken[256];
    init(localToken, password);
    memset_s(password, bufferSize, ' ', strlen(password));
    memset_s(localToken, sizeof(localToken), ' ', strlen(localToken));
    free(password);
}