#include <stdio.h>
#include <math.h>
int main(int argc, const char* argv[]){

    double theta = 0.0;
    double rad = 0.0;

    printf("input: ");
    scanf("%lf", &theta);

    rad = theta / 360.0 * 2 * M_PI;

    printf("sin(%f) = %f\n",theta, sin(rad));
}