#include <stdio.h>
int main()
{
    int year,t,next;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&year);
        if(((year%4==0) && (year%100!=0)) || (year%400==0))
            printf("It is a leap year.\n");

        else
        {
            while(1)
            {
                if(((year%4==0) && (year%100!=0)) || (year%400==0))
                {
                    next=year;
                    break;
                }
                year++;
            }
            printf("Not a leap year. Suggested: %d\n",next);
        }
    }
    return 0;
}
