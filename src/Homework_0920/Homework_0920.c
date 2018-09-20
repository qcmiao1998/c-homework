#include "Homework_0920.h"

int main(){
    printf("Homework 0920\n\n");
    printf("Problem 1\n");
    H_0920_P_1();
    printf("\nProblem 2\n");
    H_0920_P_2();
    printf("\nProblem 3\n");
    H_0920_P_3();
}

void H_0920_P_1() {
    printf("int max = %d\n", INT_MAX);
    printf("int min = %d\n", INT_MIN);
    printf("unsigned int max = %u\n", UINT_MAX);
    printf("unsigned int min = %u\n", 0);
}

void H_0920_P_2() {
    printf("The size of following types:\n");
    printf("int\t\t%zd\n", sizeof(int));
    printf("long\t%zd\n", sizeof(long));
    printf("float\t%zd\n", sizeof(float));
    printf("double\t%zd\n", sizeof(double));
    printf("bool\t%zd\n", sizeof(bool));
}

void H_0920_P_3() {
    printf("float max = %f\n", FLT_MAX);
    printf("float min = %f\n", FLT_MIN);
    printf("double max = %f\n", DBL_MAX);
    printf("double min = %f\n", DBL_MIN);
    printf("float size = %zd\n", sizeof(float));
    printf("double size = %zd\n", sizeof(double));
}
