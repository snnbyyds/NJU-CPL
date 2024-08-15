#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#define NUM 41

struct node
{
    uint32_t num;
    struct node *next;
};

struct linkedlist
{
    struct node *head;
    struct node *tail;
} list = {NULL, NULL};

struct node *initnode(uint32_t val);
void appendnode(struct node *new);
struct node *killnext(struct node *curr); // kill the next man of the current one

int main(void){
    for (uint32_t i = 1; i <= NUM; i++)
    {
        appendnode(initnode(i));
    }

    uint32_t num = NUM;
    uint32_t cnt = 0;
    struct node *survive = NULL;
    for (struct node *i = list.head; 1; i = i->next)
    {
        cnt++;
        if (num <= 2)
        {
            break;
        }
        if (cnt % 3 == 2)
        {
            survive = killnext(i);
            cnt++;
            num--;
            // printf("%u", num);
        }
    }

    printf("Survival: %u %u\n", survive->num, survive->next->num);
    free(survive->next);
    free(survive);
    return 0;
}

struct node *initnode(uint32_t val){
    struct node *new = malloc(sizeof(struct node));
    new->num = val;
    new->next = NULL;
    return new;
}

void appendnode(struct node *new){
    if (list.head == NULL && list.tail == NULL)
    {
        list.head = new;
        list.tail = new;
        new->next = list.head;
    }
    else
    {
        list.tail->next = new;
        list.tail = new;
        new->next = list.head;
    }
}

struct node *killnext(struct node *curr){
    printf("Killing: %u\n", curr->next->num);
    struct node *nextnode = curr->next;
    curr->next = nextnode->next;
    free(nextnode);
    nextnode = NULL;
    return curr;
}