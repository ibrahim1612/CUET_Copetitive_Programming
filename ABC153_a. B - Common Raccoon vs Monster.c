#include <stdio.h>

int main()
{
   int h,n,a,i,t=0;
   scanf("%d %d",&h,&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a);
       t=t+a;
   }
   if(t>=h)
       printf("Yes\n");
   else
   printf("No\n");

    return 0;
}
