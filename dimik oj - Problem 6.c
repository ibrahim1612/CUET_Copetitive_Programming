#include <stdio.h>
int main()
{
    int i,t,n,sum=0;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        sum=sum+n%10;
        sum=sum+n/10000;
        printf("Sum = %d\n",sum);
        sum=0;
    }
    return 0;
}
