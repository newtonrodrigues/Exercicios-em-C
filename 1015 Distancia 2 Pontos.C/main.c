#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float x1, y1;
    float x2, y2;
    float distancia;

    scanf ("%f %f", &x1, &y1 );
    scanf ("%f %f", &x2, &y2 );

    distancia = sqrt((pow( x2 - x1, 2 )) + (( y2 - y1 ) * ( y2 - y1 )));

    printf ("%.4f\n", distancia);

    return 0;
}
