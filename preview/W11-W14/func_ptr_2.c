#include<stdio.h>

void callback(void);
void callback2(void);
void handler(void (*f)(void));

int main(void){
    handler(callback);
    handler(callback2);
    return 0;
}

void callback(void){
    printf("callback\n");
}

void callback2(void){
    printf("callback2\n");
}

void handler(void (*f)(void)){
    f();
}