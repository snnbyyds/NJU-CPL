#include<stdio.h>
#include<assert.h>

int main(int argc, char **argv){
    int (*f)(int, char **) = main;
    if (argc != 0)
    {
        char ***a = &argv, *first = argv[0], ch = argv[0][0];
        printf("arg = \"%s\"; ch = '%c'\n", first, ch);
        assert(***a == ch);
        f(argc - 1, argv + 1);
    }
    
    return 0;
}