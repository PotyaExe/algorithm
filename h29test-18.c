#include <stdio.h>
#include <stdlib.h>

typedef struct CELL {
    int value;
    struct CELL *next;
} CELL;

int main(void)
{
    CELL root;
    CELL *p = &root;
    int a[5] = {3, 5, 2, 4, 1};
    int x;
    CELL *i, *j;

    for ( x = 0; x < 5; x++ ) {
        p->next = (CELL *)malloc(sizeof(CELL));
        p = p->next;
        p->value = a[x];
    }
    p->next = NULL;
    for ( i = root.next; i->next != NULL; i = i->next ) {
        for (j = i->next; j != NULL; j = j->next ) {
            if (i->value > j->value) {
                x = i->value;
                i->value = j->value;
                j->value = x;
            }
        }
    }
    for (p = root.next; p != NULL; p = p->next ) {
        printf("%d\n", p->value);//1
    }                            //2
    return 0;                    //3
}                                //4
                                 //5
