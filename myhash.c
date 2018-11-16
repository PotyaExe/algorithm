#include <stdio.h>

#define B_S 5

int myHash(int key);
void initTable(int table[B_S]);
void insertTable(int table[B_S], int data);
void printTable(int table[B_S]);

void printMenu(void);


int main(void)
{
	int table[B_S];
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
				printf("Input data you wann insert = ");
				scanf("%d", &data);
				insertTable(table, data);
			 	break;

			case 3 : //Search data
				// you can write program here!
 
				break;

			case 4 : // Delete data
				// you can write program here!

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

void initTable(int table[B_S])
{
	int i;

	for (i = 0; i < B_S; i++) {
		table[i] = -1;
	}
}

void insertTable(int table[B_S], int data)
{
	table[myHash(data)] = data;
}

void printTable(int table[B_S])
{
	int i;

	for (i = 0; i < B_S; i++) {
		printf("tabel[%d] = %d\n", i, table[i]);
	}
}

void printMenu(void)
{
	printf("\n1. Print,  2. Insert,  3. Search,  4. Delete, 5. Exit\n");
	printf("Select what you wanna do! ( 1 - 5 ) : ");
}