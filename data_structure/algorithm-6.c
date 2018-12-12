#include <stdio.h>
#include <stdlib.h>

typedef struct CELL {
	int value;
	struct CELL *next;
} CELL;

void printMenu(void);
void myPrintList(CELL *p);
CELL *myInsertCell(CELL *root);
CELL *myDeleteCell(CELL *root);
void myFreeList(CELL *p);

int main(void)
{
	CELL *root = NULL;
	int item;

	printMenu();
	scanf("%d", &item);

	while ( item != 4 ) {
		switch (item) {
			case 1 :
				myPrintList(root);
				break;
			case 2 :
				root = myInsertCell(root);
 				break;
			case 3 :
				root = myDeleteCell(root);
				break;
            default://(1,2,3,4以外を除く)数字はここに来る。
                printf("LoL\n");
                myFreeList(root);
                printf("一昨日きやがれうんちやろう！！\n");
                exit(0);
		}

		printMenu();
		scanf("%d", &item);
	}

	myFreeList(root);

	printf("\nBye!\n");

	return 0;
}

void printMenu(void)
{
	printf("\n1. Print,  2. Insert,  3. Delete, 4. Exit\n");
	printf("Select what you wanna do! ( 1 - 4 ) : ");
}

void myPrintList(CELL *p)//1
{
    int i;
	if ( p == NULL ) {
		printf("\nRoot has no CELL!\n");
		return;
	}
    printf("root->");
	for (; p != NULL; p = p->next,i++) printf(" %d-> ",p->value);
	printf("NULL\n");
}

CELL *myInsertCell(CELL *root)//2
{
	CELL *p = root;
	CELL *q;
	CELL *r;
	int data;
	int basyo;
	int i;

	printf("\nInput data : ");
	scanf("%d", &data);

	printf("\nInput basyo : ");
	scanf("%d", &basyo);

	if ( basyo == 0 ) {
		q = p;
		p = (CELL *)malloc(sizeof(CELL));
		p->value = data;
		p->next = q;
		return p;
	} else {
		r = p;
		for ( i = 1; i < basyo; i++) p = p->next;
		q = p->next;
		p->next = (CELL *)malloc(sizeof(CELL));
		p->next->value = data;
		p->next->next = q;
		return r;
	}
}

CELL *myDeleteCell(CELL *root)//3
{
    CELL *p =root;
    CELL *q;
    int i,basyo;

    printf("input basyo:");
    scanf("%d",&basyo);

    if(basyo==0){
        root = root->next;
    }else{
        for(i=1;i<basyo;i++)p = p->next;
        q = p->next;
        p->next = p->next->next;
        p = q;
    }
    free (p);

    return root;
}

void myFreeList(CELL *p)//4 再帰verのFree関数
{
    if(p!=NULL){
        myFreeList(p->next);
        free(p);
    }
}


