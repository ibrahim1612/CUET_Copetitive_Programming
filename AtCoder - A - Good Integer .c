#include <stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    a=n/1000;
    b=(n/100)%10;
    c=(n/10)%10;
    d=n%10;
    if((a==b && b==c) || (b==c && c==d))
    {
        printf("Yes\n");
    }

    else
    {
        printf("No\n");
    }

    return 0;
}
