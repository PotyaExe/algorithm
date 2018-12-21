#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void myQSort(int a[], int l, int r);
void mySort(int a[], int n);
int myCheckSort(int a[], int n);
void printArray(int a[] , int l, int r);


int main(void)
{
	int *a;
	int mysize;
	int i;
	int roop;
	int ngcount = 0;

	srand((unsigned)time(NULL));

	for ( roop = 0; roop < 10000; roop++ ) {

		mysize = rand()%1000 + 1;

		a = (int *)malloc(sizeof(int) * mysize);
	
		for (i = 0; i < mysize; i++) {
			a[i] = rand()%1000 + 1;
		}

		//myQSort(a, 0, mysize - 1);
		mySort(a, mysize);
		ngcount += myCheckSort(a, mysize);
	}

	printf("ngcount = %d\n", ngcount);

	return 0;
}

void printArray(int a[] , int l, int r)
{
	int i;

	for (i = l; i <= r; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void myQSort(int a[], int l, int r)
{
	

}

int myCheckSort(int a[], int n)
{
	int i, ng  = 0;

	for ( i = 0; i < n - 1; i++ ) {
		if ( a[i] > a[i + 1] ) ng++;
	}

	return ng;
}

void mySort(int a[], int n)
{
	int i, j, tmp;

	for ( i = 0; i < n - 1; i++ ) {
		for ( j = 0; j < n - 1 - i; j++ ) {
			if ( a[j] > a[ j + 1] ) {
				tmp = a[j]; 
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}

