#include <stdio.h>
#include <math.h>
#define pi 3.14

int main()
{
    double radius;
    double circum;
    double area;

    printf("원의 반지름을 실수로 입력하시오. 예 < 10.3 > : ");
    scanf("%lf", &radius);
    circum = radius * 2 * pi;
    printf("원의 둘레 : %.2lf \n", circum);
    area = pi * pow(radius, 2);
    printf("원의 면적 : %.4lf ", area);

    return 0;
}
