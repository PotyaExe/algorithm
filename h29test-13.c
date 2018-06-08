#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *ip;
    int i;
    int ans = 0;
    ip = (int *)malloc(sizeof(int) * 5);
    for ( i = 0; i < 5; i++ ) {
        ip[i] = i;
    }
    for ( i = 0; i < 5; i++ ) {
        ans += ip[i];
    }
    printf("%d\n", ans);//10

    return 0;
}
