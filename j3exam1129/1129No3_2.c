#include <stdio.h>
#include <stdlib.h>

#define B_S 128

typedef struct CELL {
    	char *value;
	struct CELL *next;
} CELL;

unsigned char myHash(char *key);
void initTable(CELL *table[B_S]);
void insertTable(CELL *table[B_S], char *data);
void printTable(CELL *table[B_S]);
void printList(CELL *p, char num);
void myStrCpy(char *data,char *p);
int myStrCmp(char *data,char *p);
CELL **searchData(CELL *table[B_S], char *data);
char deleteData(CELL *table[B_S], char *data);

void printMenu(void);


int main(void)
{
	CELL *table[B_S];
	char *data=(char*)malloc(sizeof(char)*B_S);
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
				scanf("%s", data);
				insertTable(table, data);
			 	break;

			case 3 : //Search data
				printf("Input data you wanna search = ");
				scanf("%s", data);
				if ( searchData(table, data) ) {
					printf("Data has found in the table[%c] of the list!\n", myHash(data));
					printList(table[myHash(data)], myHash(data));
				} else {
					printf("Data has not found!\n");
				} 
				break;

			case 4 : // Delete data
				printf("Input data you wanna delete = ");
				scanf("%s", data);
				if ( deleteData(table, data) ) {
					printf("Data has deleted in the table[%c] of the list!\n", myHash(data));
					printList(table[myHash(data)], myHash(data));
				} else {
					printf("Data has not found! So we can not delete it!\n");
				} 

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

unsigned char myHash(char *key){ 
      return *(key+0); 
}
void initTable(CELL *table[B_S]) {
      int i; 
      for (i = 0; i < B_S; i++) {
            table[i] = NULL; 
      }
}
void insertTable(CELL *table[B_S], char *data) {  
      int h = myHash(data); 
      CELL **p ;
      CELL *q = (CELL *)malloc(sizeof(CELL)); 
      q->value = (char*)malloc(sizeof(char)*B_S);

      myStrCpy(data,q->value);
      for(p = &table[h]; *p != NULL;p = &(*p) -> next){
            if(myStrCmp(data,(*p)->value)<0){
                  q -> next = *p;
                  *p = q;
	            printList(table[h], h);
                  return;                  
            }
      }
	            q->next = *p;
                  *p = q;
	            printList(table[h], h);
}

CELL **searchData(CELL *table[B_S], char *data)
{
      int  h = myHash(data);
	CELL **p;

	for ( p = &table[h]; *p != NULL; p = &(*p)->next ) {
		if ( myStrCmp((*p) -> value,data)==0 ) {
                  return p;
		}
	}
	return NULL; // In the case that data has not found!
}

char deleteData(CELL *table[B_S], char *data)
{
	CELL **p,*q;

	p = searchData(table, data);
	if ( p == NULL ) {
		return 0;
	} else {
            q = *p;
            *p = (*p) -> next;
            free(q);
		return 1;
	}
}		

void printList(CELL *p, char num)
{

	for (printf("table[%c] -> ", num); p != NULL; p = p->next) {
            printf("%s -> ", p->value);
      }
	printf("NULL\n");
}

void printTable(CELL *table[B_S])
{
	int i;

	for (i = 'a'; i <= 'z'; i++) {
		printList(table[i], i);
	}
}

void printMenu(void)
{
	printf("\n1. Print,  2. Insert,  3. Search,  4. Delete, 5. Exit\n");
	printf("Select what you wanna do! ( 1 - 5 ) : ");
}

void myStrCpy(char *data,char *p){
      int i;
      for(i=0; *(data+i) != '\0';i++)*(p+i)=*(data+i);
}

int myStrCmp(char *data,char *p){
      int i;
      for(i=0;*(data+i) !='\0';i++){
            if(*(data+i) != *(p+i))return *(data+i)-*(p+i);
      }
      return *(data+i)-*(p+i);

}
     
