//(10)
#include <stdio.h>
void f(char str1[], char str2[]);
int main(void)
{
    char str1[20] = "Hello";
    char str2[] = "World";
    f(str1, str2);
    printf("%s\n", str1);//HelloWorld
    return 0;
}
void f(char str1[], char str2[])
{
    int i, j;
    for ( i = 0; str1[i] != '\0'; i++);
    for ( j = 0; str2[j] != '\0'; j++ ) {
    str1[i + j] = str2[j];
    }
    str1[i + j] = '\0';
}
