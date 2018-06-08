//(8)
#include <stdio.h>
int f(char str[]);
int main(void)
{
    char str[] = "Hello";
    printf("%d\n", f(str));//5
    return 0;
}
int f(char str[])
{
    int i;
        for ( i = 0; str[i] != '\0'; i++ );
    return i;
}
