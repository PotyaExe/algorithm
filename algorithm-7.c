#include <stdio.h>
#include <stdlb.h>
typedef struct CELL{
    int value;
    struct CELL *next;
}CELL

void myInsent(CELL *p; int  data; int da;);

int main(void){
    CELL *root;
    CELL *p;
    int data;
    int ba;

    scanf("%d",&data);
    root = (CELL *)malloc(sizeof(CELL));

    p = root;
    p -> value = data;

    scanf("%d",&data);
    while(data > 0){
        p -> next = (CELL)malloc(sizeof(CELL));
        p = p-> next;
        p -> value = data;
        scanf("%d",&data);
    }
    p -> next = NULL;
    printList(root);

    scanf("%d",&data);
    scanf("%d",&ba);

    myINsert()
    printList()
