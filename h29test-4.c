#include <stdio.h>
int main(void)
{
    char str[15] ="HelloWorld";
    char *cp;

    cp = &str[5];
    printf("%s\n",cp);//World
    return 0;
}
