#include <string.h>

char * strycpy(char * destino, const char * origem);
char * strcat(char * destino, const char * origem);
int strcmp(const char * str1, const char * str2);
int strlen(const char * str);

char toupper(char c);
char tolower(char c);

while ((c = getchar()) != '\n') {
    str[i] = c;
    str = (char *)realloc(str, sizeof(char)*(i + 2));
    i = i + 1;
}

str[i] = '\0';

str = (char *)realloc(str, sizeof(char)*(i+2));