#include <stdio.h>
#include <math.h>
#define A     3.2
#define B     1.26
#define X1    0.1
#define X2    3.15
#define DX    1.5e-1
main( )
{
    double x,y;
    int k=0;
    for(x=X1; x<=X2; x+=DX)
    {
        y=(A* sin(x))/ (sqrt(x)+B*x);

        if (y>0)
            printf("\n Y=%f  X=%2.if",y,x);
        else
            k++;
    }
    printf("\n Amount=%i",k);
}
