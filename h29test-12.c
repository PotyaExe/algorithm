#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str;

    str=(char*)malloc(sizeof(char)*5);
    str[0] = 'H';
    str[1] = 'e';
    str[2] = '\0';

    printf("%s\n",str);//He

    return 0;
}
