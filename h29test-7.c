#include <stdio.h>
void f(int *x,int *y);

int main(void)
{
    int x=3,y=5;

    f(&x,&y);
    printf("%d,%d\n",x,y);//5,3
    return 0;
}

void f(int *x,int *y)
{
    int a = *x;
    *x = *y;
    *y = a ;
}
