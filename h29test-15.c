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
    int a[3]={3,5,7};
    int i;

    for(i=0;i<3;i++){
        p->next=(CELL*)malloc(sizeof(CELL));
        p=p->next;
        p->value = a[i];
    }
    p->next = NULL;

    for(p=root.next;p!=NULL;p=p->next){
        printf("%d\n",p->value);//3
    }                           //5
    return 0;                   //7
}
