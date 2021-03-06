#include <stdio.h>
int main()
{
    int T,a,b,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&a,&b);
        printf("Case %d: %d",i,a+b);
        printf("\n");
    }
    return 0;
}
