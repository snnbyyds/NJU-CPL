#include<stdio.h>

int mystrcmp(const char *s1, const char *s2);

int main(){
    char *str1 = "hello";
    char *str2 = "world";
}

int mystrcmp(const char *s1, const char *s2){
    while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
    {
        s1++;
        s2++;
    }
    if (*s1 == '\0' && *s2 == '\0')
    {
        return 0;
    }
    return *s1 - *s2;
}