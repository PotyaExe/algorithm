//2回目の修正済みアルゴリズム。
#include<stdio.h>
#include<stdlib.h>

typedef struct CELL{
    int value;
    struct CELL *next;
} CELL;

//忘れてならない。関数宣言。
void free_next(CELL *p);

int main(void){
    CELL root;
    CELL *p = &root;
    int data;
    root.next = NULL;
    scanf("%d",&data);
    //動的に確保している。0以下(以外)が入力されたらWhileから出る。
    while(data > 0){
        if(p -> next = (CELL*)malloc(sizeof(CELL))){

        } else {
            exit(1);
   }
    p = p -> next;
    p -> value = data;
    scanf("%d",&data);
    }
    //次に入る予定のリストにNULLをぶっ込む・
    //0以下（以外）が入ったリストにもNULLをぶっ込む。
    p -> next = NULL;
    p = root.next;
    for(;p!=NULL;p=p ->next){
        printf("%d\n",p->value);
    }
    //root.nextの値を渡す。今回はNULL。
    //関数の名前がfree_nextだが、正直何でも良い。ただ、パソコンが勘違いしそうな（deleteとか)名前だとエラー起こすかも。
    free_next(root.next);
    return 0;
}
//free_next関数で使用したリストを開放する。
//NULL以外なら開放を繰り返してく。
//再帰で考えてる。非再帰は知らん。
void free_next(CELL *p){
    if(p->next!=NULL){
        free_next(p->next);
    }
    free(p);
}
