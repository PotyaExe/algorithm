#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 10
#define N 10 

void myShuffleArray(int a[], int n);
void myPrintArray(int a[], int n);
void myBinsort(int a[],int  n);

int main(void)
{
	int a[N];
	
	srand((unsigned)time(NULL));

	myShuffleArray(a, N);
	myPrintArray(a, N);
	myBinsort(a,N);
	myPrintArray(a, N);
	
	return 0;
		
}

void myShuffleArray(int a[], int n)
{
	int i;
	int index1, index2, tmp;

	for ( i = 0; i < n; i++) {
		a[i]= i+1;
	}

	for ( i = 0; i < n * 100; i++ ) {
		index1 = rand()%n;
		index2 = rand()%n;
		tmp = a[index1];
		a[index1] = a[index2];
		a[index2] = tmp;
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

void myBinsort(int a[],int  n)
{
	int b[M+1];
	int i, j=0;

	for (i = 0; i < M+1; i++) {
		b[i] = -1;
	}
     for(i = 0; i < n; i++){
          b[a[i]] = a[i];
     }
     for(i = 0; i < M+1; i++){
          if(b[i] != -1) a[j++] = b[i];
     }
}
