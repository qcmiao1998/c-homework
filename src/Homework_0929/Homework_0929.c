#include "Homework_0929.h"

int main(){
    printf("Homework 0920\n");
    printf("\nProblem 4.8\n");
    Problem_4_8();
    printf("\nProblem 4.9\n");
    Problem_4_9();
    printf("\nProblem 4.10\n");
    Problem_4_10();
    return 0;
}

void Problem_4_8() {
    float const PI = 3.1415927f;
    float r, h;
    printf("r = ");
    scanf("%f", &r);
    printf("h = ");
    scanf("%f", &h);
    float circumference, roundArea, ballSurfaceArea, ballVolume, cylindricalVolume;
    circumference = 2.f * PI * r;
    printf("圆周长: %.2f\n", circumference);
    roundArea = PI * powf(r, 2.f);
    printf("圆面积: %.2f\n", roundArea);
    ballSurfaceArea = 4.f * PI * powf(r, 2.f);
    printf("圆球表面积: %.2f\n", ballSurfaceArea);
    ballVolume = 4.f / 3.f * PI * powf(r, 3.f);
    printf("圆球体积: %.2f\n", ballVolume);
    cylindricalVolume = PI * powf(r, 2.f) * h;
    printf("圆柱体积: %.2f\n", cylindricalVolume);
}

void Problem_4_9() {
    float temp;
    printf("华氏度: ");
    scanf("%f", &temp);
    temp = 5.f / 9.f * (temp - 32.f);
    printf("摄氏度: %f", temp);
}

void Problem_4_10() {
    char c1, c2;
    c1 = (char)getchar();
    c2 = (char)getchar();
    putchar((int)c1);
    printf("%c", c2);
    printf("ASCII c1: %d  c2: %d", c1, c2);
}
