#include <stdio.h>
int main(void)
{
    int a[5]={0,1,2,3,4};
    int ans = 0;
    int i;

    for(i=0;i<5;i++){
        ans += a[i];
    }
    printf("%d\n",ans);//10
    return 0;
}
