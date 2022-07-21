//
//  04_02_rectangle.c
//  prg1
//
//  Created by k22126kk on 2022/05/12.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    double width=0, height=0, area=0;
    printf("width? ");
    scanf("%lf", &width);
    printf("height? ");
    scanf("%lf", &height);
    area = width * height;
    printf("area = %f\n", area);
    return 0;
}
