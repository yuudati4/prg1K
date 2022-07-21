#include <stdio.h>
#include <math.h>

double calcArea (double r){
   return(r * r * M_PI);
}

double calcCircumference (double r){
    return(2 * r * M_PI);
}

int main(int argc, const char* argv[]){
    double r = 0.0;

    printf("input: ");
    scanf("%lf",&r);

    printf("%f %f\n",calcArea(r),calcCircumference(r));
    return 0;
}