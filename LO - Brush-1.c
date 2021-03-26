#include <stdio.h>
int main()
{
    int t,n,sum,num,i,j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        sum=0;
        scanf("%d",&n);
        for(j=1; j<=n; j++)

        {
            scanf("%d",&num);
            if(num>0)
            {
                sum+=num;
            }

        }
        printf("Case %d: %d\n",i,sum);
    }
}
