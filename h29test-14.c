//(14)
#include <stdio.h>
#include <stdlib.h>

typedef struct CELL{
    int value;
    struct CELL *next;
}CELL;

int main(void)
{
    CELL *p;

    p =(CELL*)malloc(sizeof(CELL));
    p->value = 5;
    p->next =NULL;
    printf("%d\n",p->value);//5
    return 0;
}
