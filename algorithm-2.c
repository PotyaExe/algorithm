//最初のアルゴリズム授業の修正済みプログラム

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
    //もし、最初の入力されたものが0以下（以外）だったら強制終了。
    //１以上だったら普通に通す。
if(data > 0){
    root= (CELL*)malloc(sizeof(CELL));
    root -> value = data;
    root -> next = NULL;
}else{
    exit(1);
}

    p = root;
    scanf("%d",&data);
    //上のif文と同じ。0以下（以外）が来たら抜ける。
    while(data > 0){
        p -> next =(CELL*)malloc(sizeof(CELL));
        p = p -> next;
        p -> value = data;
        scanf("%d",&data);
    }
    p -> next = NULL;
    //表示する。
    for(p = root; p!= NULL;p=p->next){
        printf("%d\n",p->value);
    }
    return 0;
}

