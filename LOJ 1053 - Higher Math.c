#include <stdio.h>
int main()
{
    int T,i,a,b,c;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a*a+b*b==c*c) ||(a*a+c*c==b*b)||(b*b+c*c==a*a))
        {
            printf("Case %d: yes\n",i);
        }
        else
        {
            printf("Case %d: no\n",i);
        }
    }
    return 0;
}
