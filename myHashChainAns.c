#include <stdio.h>
#include <stdlib.h>

#define B_S 5

typedef struct CELL {
	int value;
	struct CELL *next;
} CELL;

int myHash(int key);
void initTable(CELL *table[B_S]);
void insertTable(CELL *table[B_S], int data);
void searchTable(CELL *table[B_S], int data);
void deleteTable(CELL *table[B_S], int data);
void printTable(CELL *table[B_S]);
void printList(CELL *p, int num);

void printMenu(void);


int main(void)
{
	CELL *table[B_S];
	int data;
	int item;
	
	initTable(table);

	printMenu();
	scanf("%d", &item);

	while ( item != 5 ) { 
		switch (item) {
			case 1 : //Print table
				printTable(table);
				break;

			case 2 : //Insert data
				printf("Input data you wanna insert = ");
				scanf("%d", &data);
				insertTable(table, data);
			 	break;

			case 3 : //Search data
				// you can write program here!
                        printf("Input data you wanna search = ");
                        scanf("%d", &data);
                        searchTable(table, data);
                        break;

			case 4 : // Delete data
				// you can write program here!
                        printf("Input data you wanna delete = ");
                        scanf("%d", &data);
                        deleteTable(table,data);
				break;
			
			default :

				break;
		}
		
		printMenu();
		scanf("%d", &item);
	}

	printf("\nBye!\n\n");
	return 0;
}

int myHash(int key)
{
	return key % B_S;
}

void initTable(CELL *table[B_S])
{
	int i;

	for (i = 0; i < B_S; i++) {
		table[i] = NULL;
	}
}

void insertTable(CELL *table[B_S], int data)
{
	int h = myHash(data);
	CELL *p = (CELL *)malloc(sizeof(CELL));

	p->value = data;
	p->next = table[h];

	table[h] = p;

	printList(table[h], h);
}

void searchTable(CELL *table[B_S], int data){
      CELL *p;
      int h = myHash(data);
      for(p=table[h]; p != NULL;p = p -> next){
      if(p->value == data){
            printf("I found it!\n");
            return;
      }
      }
      printf("Not found...\n");
}

void deleteTable(CELL *table[B_S], int data){
      CELL **p,*q;
      int h = myHash(data);
      for(p=&(table[h]); *p != NULL;p = &(*p)->next){
	      if((*p)->value == data){
                  q = *p;
                  (*p) = (*p) -> next;
                  free(q);
                  return;
            }
      }
}

void printList(CELL *p, int num)
{
	for (printf("table[%d] -> ", num); p != NULL; p = p->next) {
		printf("%d -> ", p->value);
	}
	printf("NULL\n");
}

void printTable(CELL *table[B_S])
{
	int i;

	for (i = 0; i < B_S; i++) {
		printList(table[i], i);
	}
}

void printMenu(void)
{
	p#include <stdio.h>
#include <stdlib.h>

#define B_S 5

typedef struct CELL {
	int value;
	struct CELL *next;
} CELL;

int myHash(int key);
void initTable(CELL *table[B_S]);
void insertTable(CELL *table[B_S], int data);
void searchTable(CELL *table[B_S], int data);
void deleteTable(CELL *table[B_S], int data);
void printTable(CELL *table[B_S]);
void printList(CELL *p, int num);

void printMenu(void);


int main(void)
{
	CELL *table[B_S];
	int data;
	int item;
	
	initTable(table);

	printMenu();
	scanf("%d", &item);

	while ( item != 5 ) { 
		switch (item) {
			case 1 : //Print table
				printTable(table);
				break;

			case 2 : //Insert data
				printf("Input data you wanna insert = ");
				scanf("%d", &data);
				insertTable(table, data);
			 	break;

			case 3 : //Search data
				// you can write program here!
                        printf("Input data you wanna search = ");
                        scanf("%d", &data);
                        searchTable(table, data);
                        break;

			case 4 : // Delete data
				// you can write program here!
                        printf("Input data you wanna delete = ");
                        scanf("%d", &data);
                        deleteTable(table,data);
				break;
			
			default :

				break;
		}
		
		printMenu();
		scanf("%d", &item);
	}

	printf("\nBye!\n\n");
	return 0;
}

int myHash(int key)
{
	return key % B_S;
}

void initTable(CELL *table[B_S])
{
	int i;

	for (i = 0; i < B_S; i++) {
		table[i] = NULL;
	}
}

void insertTable(CELL *table[B_S], int data)
{
	int h = myHash(data);
	CELL *p = (CELL *)malloc(sizeof(CELL));

	p->value = data;
	p->next = table[h];

	table[h] = p;

	printList(table[h], h);
}

void searchTable(CELL *table[B_S], int data){
      CELL *p;
      int h = myHash(data);
      for(p=table[h]; p != NULL;p = p -> next){
      if(p->value == data){
            printf("I found it!\n");
            return;
      }
      }
      printf("Not found...\n");
}

void deleteTable(CELL *table[B_S], int data){
      CELL **p,*q;
      int h = myHash(data);
      for(p=&(table[h]); *p != NULL;p = &(*p)->next){
	      if((*p)->value == data){
                  q = *p;
                  (*p) = (*p) -> next;
                  free(q);
                  return;
            }
      }
}

void printList(CELL *p, int num)
{
	for (printf("table[%d] -> ", num); p != NULL; p = p->next) {
		printf("%d -> ", p->value);
	}
	printf("NULL\n");
}

void printTable(CELL *table[B_S])
{
	int i;

	for (i = 0; i < B_S; i++) {
		printList(table[i], i);
	}
}

void printMenu(void)
{
	printf("\n1. Print,  2. Insert,  3. Search,  4. Delete, 5. Exit\n");
	printf("Select what you wanna do! ( 1 - 5 ) : ");
}

#include <stdio.h>
#include <stdlib.h>

#define B_S 5

typedef struct CELL {
	int value;
	struct CELL *next;
} CELL;

int myHash(int key);
void initTable(CELL *table[B_S]);
void insertTable(CELL *table[B_S], int data);
void searchTable(CELL *table[B_S], int data);
void deleteTable(CELL *table[B_S], int data);
void printTable(CELL *table[B_S]);
void printList(CELL *p, int num);

void printMenu(void);


int main(void)
{
	CELL *table[B_S];
	int data;
	int item;
	
	initTable(table);

	printMenu();
	scanf("%d", &item);

	while ( item != 5 ) { 
		switch (item) {
			case 1 : //Print table
				printTable(table);
				break;

			case 2 : //Insert data
				printf("Input data you wanna insert = ");
				scanf("%d", &data);
				insertTable(table, data);
			 	break;

			case 3 : //Search data
				// you can write program here!
                        printf("Input data you wanna search = ");
                        scanf("%d", &data);
                        searchTable(table, data);
                        break;

			case 4 : // Delete data
				// you can write program here!
                        printf("Input data you wanna delete = ");
                        scanf("%d", &data);
                        deleteTable(table,data);
				break;
			
			default :

				break;
		}
		
		printMenu();
		scanf("%d", &item);
	}

	printf("\nBye!\n\n");
	return 0;
}

int myHash(int key)
{
	return key % B_S;
}

void initTable(CELL *table[B_S])
{
	int i;

	for (i = 0; i < B_S; i++) {
		table[i] = NULL;
	}
}

void insertTable(CELL *table[B_S], int data)
{
	int h = myHash(data);
	CELL *p = (CELL *)malloc(sizeof(CELL));

	p->value = data;
	p->next = table[h];

	table[h] = p;

	printList(table[h], h);
}

void searchTable(CELL *table[B_S], int data){
      CELL *p;
      int h = myHash(data);
      for(p=table[h]; p != NULL;p = p -> next){
      if(p->value == data){
            printf("I found it!\n");
            return;
      }
      }
      printf("Not found...\n");
}

void deleteTable(CELL *table[B_S], int data){
      CELL **p,*q;
      int h = myHash(data);
      for(p=&(table[h]); *p != NULL;p = &(*p)->next){
	      if((*p)->value == data){
                  q = *p;
                  (*p) = (*p) -> next;
                  free(q);
                  return;
            }
      }
}

void printList(CELL *p, int num)
{
	for (printf("table[%d] -> ", num); p != NULL; p = p->next) {
		printf("%d -> ", p->value);
	}
	printf("NULL\n");
}

void printTable(CELL *table[B_S])
{
	int i;

	for (i = 0; i < B_S; i++) {
		printList(table[i], i);
	}
}

void printMenu(void)
{
	printf("\n1. Print,  2. Insert,  3. Search,  4. Delete, 5. Exit\n");
	printf("Select what you wanna do! ( 1 - 5 ) : ");
}

rintf("\n1. Print,  2. Insert,  3. Search,  4. Delete, 5. Exit\n");
	printf("Select what you wanna do! ( 1 - 5 ) : ");
}


