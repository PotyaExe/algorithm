<<<<<<< HEAD
//最初のアルゴリズム授業のプログラムのバグ修正ver
//13++ if(data > 0){
//17++ }else{
//18++ exit(0);
//19++ }
=======
//最初のアルゴリズム授業の修正済みプログラム
>>>>>>> algorithm

#include <stdio.h>
#include <stdlib.h>

typedef struct CELL{
    int value;
    struct CELL *next;
}CELL;
<<<<<<< HEAD
=======

>>>>>>> algorithm
int main (void){
    int data;
    CELL *root;
    CELL *p;
    scanf("%d",&data);
<<<<<<< HEAD
    if(data > 0){
        root= (CELL*)malloc(sizeof(CELL));
        root -> value = data;
        root -> next = NULL;
    }else{
        exit(0);
    }
    p = root;
    scanf("%d",&data);
=======
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
>>>>>>> algorithm
    while(data > 0){
        p -> next =(CELL*)malloc(sizeof(CELL));
        p = p -> next;
        p -> value = data;
        scanf("%d",&data);
    }
    p -> next = NULL;
<<<<<<< HEAD
=======
    //表示する。
>>>>>>> algorithm
    for(p = root; p!= NULL;p=p->next){
        printf("%d\n",p->value);
    }
    return 0;
}

