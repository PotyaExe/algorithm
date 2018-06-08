//(9)
#include <stdio.h>
void f(char str1[], char str2[]);
int main(void)
{
    char str1[] = "Hello";
    char str2[10];
    f(str1, str2);
    printf("%s\n", str2);//Hello
    return 0;
}
void f(char str1[], char str2[])
{
    int i;
    for ( i = 0; str1[i] != '\0'; i++ ) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}
