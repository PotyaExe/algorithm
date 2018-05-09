//2回目の修正済みアルゴリズム。
#include<stdio.h>
#include<stdlib.h>

typedef struct CELL{
    int value;
    struct CELL *next;
} CELL;

void free_next(CELL *p);

int main(void){
    CELL root;
    CELL *p = &root;
    int data;
    root.next = NULL;
    scanf("%d",&data);
    while(data > 0){
        if(p -> next = (CELL*)malloc(sizeof(CELL))){

        } else {
            exit(1);
   }
    p = p -> next;
    p -> value = data;
    scanf("%d",&data);
    }
    p -> next = NULL;
    p = root.next;
    for(;p!=NULL;p=p ->next){
        printf("%d\n",p->value);
    }
    free_next(root.next);
    return 0;
}
void free_next(CELL *p){
    if(p->next!=NULL){
        free_next(p->next);
    }
    free(p);
}
