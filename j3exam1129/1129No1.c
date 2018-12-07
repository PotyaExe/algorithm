#include <stdio.h>
#include <stdlib.h>

#define WORD_SIZE 3
#define WORD_LENGTH 10

void setWordsToMyDictionary(char myDictionary[WORD_SIZE][WORD_LENGTH + 1]);
void myStrCpy(char str1[WORD_LENGTH + 1], char str2[WORD_LENGTH + 1]);
void PrintDictionary(char myDictionary[WORD_SIZE][WORD_LENGTH + 1]);

void mySort(char myDictionary[WORD_SIZE][WORD_LENGTH + 1]);

int main(void)
{
	char myDictionary[WORD_SIZE][WORD_LENGTH + 1];

	setWordsToMyDictionary(myDictionary);
	PrintDictionary(myDictionary);
	mySort(myDictionary);
	PrintDictionary(myDictionary);

	return 0;
}

void setWordsToMyDictionary(char myDictionary[WORD_SIZE][WORD_LENGTH + 1])
{
	int i;
	char buf[WORD_LENGTH + 1];
	char dummy;
	
	for ( i = 0; i < WORD_SIZE; i++ ) {
		printf("Set word [%d] (less than 10 characters) : ", i );
		scanf("%s%c", buf, &dummy);
		myStrCpy(myDictionary[i], buf);
	}
}

void myStrCpy(char str1[WORD_LENGTH + 1], char str2[WORD_LENGTH + 1])
{
	int i;

	for ( i = 0; str2[i]  != '\0'; i++ ) {
		str1[i] = str2[i];
	}
	str1[i] = str2[i];
}

void PrintDictionary(char myDictionary[WORD_SIZE][WORD_LENGTH + 1])
{
	int i;

	for ( i = 0; i < WORD_SIZE; i++ ) {
		printf("%s\n", myDictionary[i]);
	}
} 

void mySort(char myDictionary[WORD_SIZE][WORD_LENGTH + 1])
{
	int i, j;
	char *tmp = (char*)malloc(sizeof(char)*11);
	for ( i = 0; i < WORD_SIZE - 1; i++ ) {
		for ( j = 0; j < WORD_SIZE - 1 - i; j++ ) {
			if ( myDictionary[j][0] > myDictionary[j + 1][0] ) {
                    myStrCpy(tmp,myDictionary[j]);
                    myStrCpy(myDictionary[j],myDictionary[j+1]);
                    myStrCpy(myDictionary[j+1],tmp);
                    /*tmp = myDictionary[j][0]; 
				myDictionary[j][0] = myDictionary[j + 1][0];
				myDictionary[j + 1][0] = tmp;*/
			}
		}
	}
}


	

	
