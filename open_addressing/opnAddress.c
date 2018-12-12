#include <stdio.h>
#include <stdlib.h>

#define BUCKET 10
#define EMPTY   -1
#define DELETED -2

typedef enum {
	Term, Insert, Delete, Search, Dump
} Menu;

int mySearch(int a[], int data);
void myInsert(int a[], int data);
int hash(int key);
int rehash(int key);
void InitHash(int a[]);
void DumpHash(int a[]);
Menu SelectMenu(void);
int DeleteHash(int a[], int data);

int hash(int key)
{
	return (key % BUCKET);
}

int rehash(int key)
{
	return ((key + 1) % BUCKET);
}

void InitHash(int a[])
{
	int i;

	for (i = 0; i < BUCKET; i++) {
		a[i] = EMPTY;
	}
}

void myInsert(int a[], int data)
{
	
}

int mySearch(int a[], int data)
{
	
}

int DeleteHash(int a[], int data)
{
	
}

void DumpHash(int a[])
{
	int i;
	
	for (i = 0; i < BUCKET; i++) {
		if (a[i] == DELETED) {
			printf("hash[%2d] = DELETED\n", i);
		} else if (a[i] == EMPTY) {
			printf("hash[%2d] = EMPTY\n", i);
		} else {
			printf("hash[%2d] = %2d\n", i, a[i]);
		}
	}
}

Menu SelectMenu(void)
{
	int ch;
	char dummy;

	do {
		printf("(1) Add data  (2) Delete data  (3) Search data  (4) Dump  (0) End  :");
		scanf("%d%c", &ch, &dummy);
	} while (ch < Term || ch > Dump);
	return (Menu)ch;
}

int main(void)
{
	Menu menu;
	int a[BUCKET];
	int data;
	char dummy;
	int key;

	InitHash(a);

	do {
		switch (menu = SelectMenu()) {

		case Insert : printf("Input data : "); 
			     scanf("%d%c", &data, &dummy);
			   myInsert(a, data);
			    break;
		
		case Delete : 
			    printf("Input the data you want to delete : "); 
			    scanf("%d%c", &data, &dummy);
			    key = DeleteHash(a, data);
			    if (key != -1) {
			       	printf("hash[%2d] =  DELETED\n", key);
			       } else {
				printf("You can not delete the data! because the data you choose dosen't exist!\n");
			       }

			    break;

		case Search : 
			       printf("Input the data you want to search: "); 
			       scanf("%d%c", &data, &dummy);
			       key = mySearch(a, data);
			       if (key != -1) {
			       	printf("Search data : hash[%2d] =  %2d\n", key, a[key]);
			       } else {
				printf("Not found!\n");
			       }

			    break;

		case Dump : 
			    DumpHash(a);
			    break;

		}
	} while (menu != Term);

	return 0;
}
