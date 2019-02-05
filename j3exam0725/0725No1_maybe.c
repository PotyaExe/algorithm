#include <stdio.h>
#include <stdlib.h>

typedef struct CELL {
	int value;
	struct CELL *next;
} CELL;

void catList(CELL *sList, CELL *pdList);
void printList(CELL *p);

int main(void)
{
	CELL sList, dList;
	CELL *p = NULL;
	int data;

	sList.next = NULL;
	dList.next = NULL;

	//Making source list
	printf("\nNow you are making source list!\nIf you input negative integer or zero, it will stop!\n");
	printf("Input data : ");
	scanf("%d", &data);
	while ( data > 0 ) {
		p = sList.next;
		sList.next = (CELL *)malloc(sizeof(CELL));
		sList.next->value = data;
		sList.next->next = p;
		printf("Input data : ");
		scanf("%d", &data);
	}

	//Viewing data of source list
	printf("Data of source list : \n");
	printList(sList.next);


	//Making distination list
	printf("\nNow you are making distination list!\nIf you input negative integer or zero, it will stop!\n");
	printf("Input data : ");
	scanf("%d", &data);
	while ( data > 0 ) {
		p = dList.next;
		dList.next = (CELL *)malloc(sizeof(CELL));
		dList.next->value = data;
		dList.next->next = p;
		printf("Input data : ");
		scanf("%d", &data);
	}

	//Viewing data of distination list
	printf("Data of distination list : \n");
	printList(dList.next);

	//Concatenating two lists
	printf("\n\nConcatenating two lists has finished!\n\n");
	catList(&sList, &dList);

	//Viewing data of two lists
	printf("\nData of source list : \n");
	printList(sList.next);
	printf("\nData of distination list : \n");
	printList(dList.next);

	printf("\n");

	return 0;
}

void catList(CELL *sList, CELL *dList)
{
	CELL *q=sList->next;
	for(;dList->next!=NULL;dList=dList->next);
	dList->next=q;
	sList->next=NULL;

	
}

void printList(CELL *p)
{
	if (p == NULL) {
		printf("List has no data!\n");
	} else {
		for ( ; p != NULL; p = p->next) {
			printf("%d ", p->value);
		}
		printf("\n");
	}
}



	
		
