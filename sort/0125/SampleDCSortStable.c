#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 10
#define N 10 

void mySetArray(int a[], int n, int m, int state);
void myPrintArray(int a[], int n);
void DistributionCountingSort(int a1[], int a2[], int  n);

int main(void)
{
	int a1[N], a2[N];
	
	srand((unsigned)time(NULL));

	mySetArray(a1, N, M, 1);
	mySetArray(a2, N, 0, 0);
	myPrintArray(a1, N);
	DistributionCountingSort(a1, a2, N);
	myPrintArray(a2, N);
	
	return 0;
		
}

void mySetArray(int a[], int n, int m, int state)
{
	int i;

	for ( i = 0; i < n; i++) {
		if (state) a[i]= rand()%m+1;
		else a[i] = 0;
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

void DistributionCountingSort(int a1[],int a2[], int n)
{
	int f[M+1];
	int i;

	for (i = 0; i < M+1; i++) {
		f[i] = 0; 
	}
	for (i = 0; i < n; i++) {
		f[a1[i]]++;
	}
	myPrintArray(f, M+1);	

	for (i = 1; i < M+1; i++) {
		f[i] = f[i -1] + f[i];
	}
	myPrintArray(f, M+1);
	
	for (i = n-1; i >= 0; i--) {
	        //You can write program here
	  
	}
}
