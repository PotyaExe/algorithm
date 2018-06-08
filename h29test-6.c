//(6)
#include <stdio.h>
int main(void)
{
    int a[5] = {10, 20, 30, 40, 50};
    int i, index;
    for ( i = 0; i < 5; i++ ) {
        if ( a[i] == 30 ) {
            index = i;
                break;
            }
        }
    printf("%d\n", index);//2
    return 0;
}
