#include<stdio.h>
#include<string.h>

#define LEN 11

void printstrings(char *str[], int len);
void quicksort(char *str[], int left, int right);
int partition(char *str[], int left, int right);

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
    quicksort(names, 0, LEN - 1);   
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

void quicksort(char *str[], int left, int right){
    int mid;
    if (left < right)
    {
        mid = partition(str, left, right);
        quicksort(str, left, mid - 1);
        quicksort(str, mid + 1, right - 1);
    }
}

int partition(char *str[], int left, int right){
    char * pivot = str[left];

    while (left < right){
        while (strcmp(str[right], pivot) >= 0 && left < right){
            right--;
        }
        str[left] = str[right];
        while (strcmp(str[left], pivot) <= 0 && left < right){
            left++;
        }
        str[right] = str[left];
    }

    str[right] = pivot;
    return right;
}