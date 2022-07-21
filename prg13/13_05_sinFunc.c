#include <stdio.h>
#include <math.h>

double deg2Rad (double theta){
    return (theta / 360.0 * 2 * M_PI);
}
int main(int argc, const char* argv[]){
    double theta = 0.0;

    printf("input: ");
    scanf("%lf",&theta);

    printf("sin (%f) = %f\n",theta,sin(deg2Rad(theta)));

    return 0;
}