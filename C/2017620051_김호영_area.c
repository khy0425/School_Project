#include <stdio.h>
#include <math.h>
#define pi 3.14

int main()
{
    double radius;
    double circum;
    double area;

    printf("���� �������� �Ǽ��� �Է��Ͻÿ�. �� < 10.3 > : ");
    scanf("%lf", &radius);
    circum = radius * 2 * pi;
    printf("���� �ѷ� : %.2lf \n", circum);
    area = pi * pow(radius, 2);
    printf("���� ���� : %.4lf ", area);

    return 0;
}
