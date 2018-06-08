//(11)
#include <stdio.h>
void f(int a[2][3]);
int main(void)
{
    int a[2][3];
    int i, j;
    for ( i = 0; i < 2; i++ ) {
        for (j = 0; j < 3; j++ ) {
            a[i][j] = i + j;
        }
    }
    f(a);
    return 0;
}
void f(int a[2][3])
{
    int i, j;
    for ( i = 0; i < 2; i++ ) {
        for (j = 0; j < 3; j++ ) {
            printf("%d", a[i][j]);//012
        }                         //123
    printf("\n");
    }
}
