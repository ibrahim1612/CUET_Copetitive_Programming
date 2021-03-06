#include <stdio.h>
#include <math.h>
main()
{
    float T,circle_area,blue_part,square_area,pi=2*acos(0),r;
    scanf("%f",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%f",&r);
        circle_area=pi*r*r;
        square_area=(r*2)*(r*2);
        blue_part=square_area-circle_area;
        printf("Case %d: %.2f\n",i,blue_part);
    }
    return 0;
}
