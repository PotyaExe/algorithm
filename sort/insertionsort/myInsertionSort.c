#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10 

void mySetArray(int a[], int n);
void myPrintArray(int a[], int n);
void myInsertionSort(int a[],int  n);

int main(void)
{
	int a[N];
	
	srand((unsigned)time(NULL));

	mySetArray(a, N);
	myPrintArray(a, N);
	myInsertionSort(a,N);
	myPrintArray(a, N);
	
	return 0;
		
}

void mySetArray(int a[], int n)
{
	int i;

	for ( i = 0; i < n; i++) {
		a[i]= rand()%100+1;
	}
}

void myPrintArray(int a[], int n)
{
	int i;

	for ( i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void myInsertionSort(int a[],int  n)
{
	int i, j, tmp;

	for (i = 1; i < n; i++) {

		//You can write program here!
		

	}
}
