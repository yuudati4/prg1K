//
//  04_issue1_K22126.c
//  prg1
//
//  Created by k22126kk on 2022/05/12.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int height, weight;
    double standardWeight, bmi;
    
    printf("height? ");
    scanf("%d", &height);
    printf("weight? ");
    scanf("%d", &weight);
    
    standardWeight = (height-100.0)*0.9;
    printf("standardWeight = %f\n", standardWeight);
    
    double heightm;
    heightm = height * 0.01;
    bmi =  weight/(heightm * heightm);
    printf("BMI = %f\n", bmi);
    return 0;
}
