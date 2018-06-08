#include <stdio.h>

void push(int s[3], int *sp, int data);
int pop(int s[3], int *sp);

int main(void)
{
    int s[3];
    int sp = 0;
    push(s, &sp, 5);
    push(s, &sp, 3);
    printf("%d\n", pop(s, &sp));//3
    printf("%d\n", pop(s, &sp));//5
    return 0;
}

void push(int s[3], int *sp, int data)
{
    s[(*sp)++] = data;
}
int pop(int s[3], int *sp)
{
    return s[--*sp];
}
