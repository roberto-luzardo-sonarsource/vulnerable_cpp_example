#define  __STDC_WANT_LIB_EXT1__ 1
#include<string.h>


void non(char* password, size_t bufferSize) {
    char *localToken;
    localToken = *password;
    memset(password, ' ', strlen(password)); // Noncompliant, password is about to be freed
    memset(localToken, ' ', strlen(localToken)); // Noncompliant, localToken is about to go out of scope
    free(password);
}

#ifdef __STDC_LIB_EXT1__
void com(char* password, size_t bufferSize) {
    char localToken[256];
    init(localToken, password);
    memset_s(password, bufferSize, ' ', strlen(password));
    memset_s(localToken, sizeof(localToken), ' ', strlen(localToken));
    free(password);
}
#endif

