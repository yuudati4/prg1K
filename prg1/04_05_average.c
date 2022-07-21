//
//  04_05_average.c
//  prg1
//
//  Created by k22126kk on 2022/05/12.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int h1=0, h2=0, h3=0;
    double average=0;
    
    printf("No.1? ");
    scanf("%d",&h1);
    printf("No.2? ");
    scanf("%d",&h2);
    printf("No.3? ");
    scanf("%d",&h3);
    
    average = (h1+h2+h3)/3.0;
    printf("average = %f\n",average);
    return 0;
}
