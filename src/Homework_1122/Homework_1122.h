#ifndef HOMEWORK_1122_H
#define HOMEWORK_1122_H

#include <stdio.h>
#include <stdlib.h>

char * Problem_8_6(char const *str1, char const *str2);
char * Problem_8_10(char const *str);

double * Problem_8_14_1(double **scoreArray);
double * Problem_8_14_2(double **scoreArray);
struct Score {
    int studentNum;
    double score;
};
struct Score Problem_8_14_3(double **scoreArray);
double Problem_8_14_4(double **scoreArray);

#endif //HOMEWORK_1022_H
