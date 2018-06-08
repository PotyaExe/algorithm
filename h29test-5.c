#include <stdio.h>

typedef struct Point {
    int x;
    int y;
}Point;

int main(void)
{
    Point pt;
    Point *p;

    pt.x = 5;
    pt.y = 10;
    p = &pt;
    printf("%d,%d\n",p->x,pt.y);//5,10

    return 0;
}
