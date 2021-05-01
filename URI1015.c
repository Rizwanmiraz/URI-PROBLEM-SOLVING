#include <stdio.h>
#include <math.h>
int main(){

    double X1,Y1,X2,Y2,p1,p2,Distance;

    scanf("%lf %lf %lf %lf",&X1,&Y1,&X2,&Y2);

    p1 = (X1-X2);
    p1 = p1*p1;
    

    p2 = (Y1-Y2);
    p2 = p2*p2;
    
    Distance = p1 + p2;

    Distance = sqrt(Distance);

   
    printf("%.4lf\n",Distance);
    
    

    return 0;
}