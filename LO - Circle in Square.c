#include <stdio.h>
#include <math.h>
main()
{
    double T,circle_area,blue_part,square_area,pi=2*acos(0),r;
    scanf("%lf",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%lf",&r);
        circle_area=pi*r*r;
        square_area=(r*2)*(r*2);
        blue_part=square_area-circle_area;
        printf("Case %d: %.2lf\n",i,blue_part);
    }
    return 0;
}
