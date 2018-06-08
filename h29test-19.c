#include <stdio.h>

void enq(int q[10], int *r, int data);
int deq(int q[10], int *f);

int main(void)
{
    int q[10];
    int f = 0, r = 0;
    enq(q, &r, 5);
    enq(q, &r, 3);
    printf("%d\n", deq(q, &f));//5
    printf("%d\n", deq(q, &f));//3
    return 0;
}

void enq(int q[10], int *r, int data)
{
    q[(*r)++] = data;
}

int deq(int q[10], int *f)
{
    int x = q[(*f)++];
    return x;
}
