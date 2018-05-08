//最初のアルゴリズム授業の修正済みプログラム
//++if(data > 0){
//}else{
//exit(0)
//}

#include <stdio.h>
#include <stdlib.h>

typedef struct CELL{
    int value;
    struct CELL *next;
}CELL;
int main (void){
    int data;
    CELL *root;
    CELL *p;
    scanf("%d",&data);
if(data > 0){
    root= (CELL*)malloc(sizeof(CELL));
    root -> value = data;
    root -> next = NULL;
}else{
    exit(0);
}
    p = root;
    scanf("%d",&data);
    while(data > 0){
        p -> next =(CELL*)malloc(sizeof(CELL));
        p = p -> next;
        p -> value = data;
        scanf("%d",&data);
    }
    p -> next = NULL;
    for(p = root; p!= NULL;p=p->next){
        printf("%d\n",p->value);
    }
    return 0;
}

