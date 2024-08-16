#include<stdio.h>
#include<string.h>

#define LEN 11

void printstrings(char *str[], int len);
void selectsort(char *str[], int len);
void swap(char **a, char **b);

int main(void){
    char *(names[LEN]) = {
        "Jay",
        "Phil",
        "Clair",
        "Cam",
        "Mitch",
        "Joey",
        "Monica",
        "Rachel",
        "Chandler",
        "Phoebe",
        "Ross"
    };
    printstrings(names, LEN);
    selectsort(names, LEN);
    printstrings(names, LEN);
    return 0;
}

void printstrings(char *str[], int len){
    for (int i = 0; i < len; i++)
    {
        printf("%s ", str[i]); // %s matches pointer to string
    }
    printf("\n");
}

void selectsort(char *str[], int len){
    for (int i = 0; i < len; i++)
    {
        int min_loc = i;
        char *min = str[min_loc];
        for (int j = i; j < len; j++)
        {
            if (strcmp(str[j], min) < 0)
            {
                min_loc = j;
                min = str[j];
            }
        }
        swap(&str[i], &str[min_loc]);
    }
}

void swap(char **a, char **b){
    char *c = *a;
    *a = *b;
    *b = c;
}