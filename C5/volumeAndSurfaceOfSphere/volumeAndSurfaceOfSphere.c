#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double r=7.5;
    double volume = (4*M_PI*r*r*r)/3;
    double surfaceArea = (4*M_PI*r*r);
    printf("Volume: %.2f\t\t",volume);
    printf("Surface Area: %.2f\n",surfaceArea);
    return(0);
}