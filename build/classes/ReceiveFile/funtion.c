#include<stdio.h>



    double raj(double x){

    double y=x;
    x=3*y;
    return(x*y);


    }

    int main()
    {

        double x,y,c;
        scanf("%lf %lf",&x,&y);
        c=raj(x);
        printf("%lf %lf %lf",x,y,c);
        return 0;
    }

