#include<stdio.h>

char * mystrchr(const char *str, const char *ch);

int main(){
    static char *splitch = "#";
    char str[] = "11#4#514#191#9#81#0";
    char *p = str;
    char *q = NULL;
    while ((q = mystrchr(p, splitch)) != NULL)
    {
        *q = '\0';
        printf("%s\n", p);
        p = q + 1;
    }
    if (p != NULL)
    {
        printf("%s\n", p);
    }
}

char * mystrchr(const char *str, const char *ch){
    char *pc = str;
    while (*pc != '\0')
    {
        if (*pc == *ch)
        {
            return pc;
        }
        pc++;
    }
    return NULL;
}