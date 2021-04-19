/*
    작성일 : 2021 - 03 - 11
    작정자 : 김 호영
    소스파일 내용 : 자동차의 속도와 거리를 이용한 시간 계산.
 */




#include <stdio.h>

int main()
{
    double car_speed = 80;
    double distance = 500;
    double time;

    printf("자동차의 속도는 %lfkm/h \n", car_speed);
    time = distance / car_speed;
    printf("자동차가 %.2lf시간 동안 진행한 거리는 %.2f km 이다. \n", time, distance);
    return 0;
}
