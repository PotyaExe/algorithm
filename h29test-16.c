//(16)
#include <stdio.h>
#include <stdlib.h>

typedef struct CELL{
    int value;
    struct CELL *next;
}CELL;

int main(void)
{
    CELL root;
    CELL *p = &root;
    CELL *x;
    int a[3]={3,5,7};
    int i;

    for(i=0;i<3;i++){
        p->next=(CELL*)malloc(sizeof(CELL));
        p = p->next;
        p->value=a[i];
    }
    p->next = NULL;

    p = root.next;
    x = &root;
    x->next = (CELL*)malloc(sizeof(CELL));
    x=x->next;
    x->value =1;
    x->next = p;

    for(p=root.next;p!=NULL;p=p->next){
        printf("%d\n",p->value);//1
    }                           //3
    return 0;                   //5
}                               //7
