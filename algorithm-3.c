//授業2回目のアルゴリズム。
//1つ目のセルは絶対に動的に確保してしまうので、1つ目の入力がWhileの条件に合わないものだったら意図と異なるリストができてしまう。
//それを修正したのは、alogorithm-4.cに示す。
#include<stdio.h>
#include<stdlib.h>

typedef struct CELL{
    int value;
    struct CELL *next;
} CELL;

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
    //freeにてリストを開放する。
    return 0;
}
