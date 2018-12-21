#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void myQSort(int a[], int l, int r);
void printArray(int a[] , int l, int r);

int main(void)
{
	int *a;
	int mysize;
	int i;

	srand((unsigned)time(NULL));

	printf("Input array size : ");
	scanf("%d", &mysize);

	a = (int *)malloc(sizeof(int) * mysize);

	for (i = 0; i < mysize; i++) {
		a[i] = rand()%100 + 1;
	}

	printArray(a, 0, mysize - 1);
	
	myQSort(a, 0, mysize - 1);

	printArray(a, 0, mysize - 1);

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

	//you can write program here!

}
	