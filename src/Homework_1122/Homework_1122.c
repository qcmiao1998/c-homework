#include "Homework_1122.h"

int main(){
    printf("%s\n", Problem_8_6("test","ok"));
    printf("%s\n", Problem_8_10("test  t 45454545 yes "));

    double **score = (double **)malloc(10 * sizeof(double *));
    for (int i = 0; i < 10; ++i) {
        score[i] = (double *)malloc(5 * sizeof(double));
        for (int j = 0; j < 5; ++j) {
            score[i][j] = 10 * i + j;
        }
    }
    double *studentAverage = Problem_8_14_1(score);
    for (int i = 0; i < 10; ++i) {
        printf("%f;",studentAverage[i]);
    }
    putchar('\n');
    double *scoreAverage = Problem_8_14_2(score);
    for (int i = 0; i < 5; ++i) {
        printf("%f;",scoreAverage[i]);
    }
    putchar('\n');

    struct Score highest = Problem_8_14_3(score);
    printf("%d %f\n", highest.studentNum, highest.score);

    printf("%f\n", Problem_8_14_4(score));

    return 0;
}


char *Problem_8_6(char const *str1, char const *str2) {
    int len1 = 0,len2 = 0;
    int i = 0;
    while (str1[i] != '\0'){
        len1++;
        i++;
    }
    while (str2[i] != '\0'){
        len2++;
        i++;
    }
    char *result = (char *)malloc((len1+len2+1) * sizeof(char));
    for (int j = 0; j < len1; ++j) {
        result[j] = str1[j];
    }
    for (int j = 0; j < len2; ++j) {
        result[len1+j] = str2[j];
    }
    result[len1+len2] = '\0';
    return result;
}

char *Problem_8_10(char const *str) {
    int longestPosition = 0, longestLength = 0;
    int tempPosition = 0, tempLength = 0;
    int nowPosition = 0;
    while (str[nowPosition] != '\0') {
        if (str[nowPosition] == ' '){
            if (tempLength > longestLength) {
                longestLength = tempLength;
                longestPosition = tempPosition;
            }
            nowPosition++;
            tempPosition = nowPosition;
            tempLength = 0;
            continue;
        }
        tempLength++;
        nowPosition++;
    }
    char *result = (char *)malloc((longestLength + 1) * sizeof(char));
    for (int i = 0; i < longestLength; ++i) {
        result[i] = str[longestPosition + i];
    }
    result[longestLength] = '\0';
    return result;
}

double * Problem_8_14_1(double **scoreArray) {
    double *studentAverage = (double *)malloc(10 * sizeof(double));
    for (int i = 0; i < 10; ++i) {
        studentAverage[i] = 0;
        for (int j = 0; j < 5; ++j) {
            studentAverage[i] += scoreArray[i][j] / 5.;
        }
    }
    return studentAverage;
}

double *Problem_8_14_2(double **scoreArray) {
    double *subjectAverage = (double *)malloc(5 * sizeof(double));
    for (int i = 0; i < 5; ++i) {
        subjectAverage[i] = 0;
        for (int j = 0; j < 10; ++j) {
            subjectAverage[i] += scoreArray[j][i] / 10.;
        }
    }
    return subjectAverage;
}

struct Score Problem_8_14_3(double **scoreArray) {
    struct Score result;
    result.score = 0;
    result.studentNum = 0;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (scoreArray[i][j] > result.score) {
                result.score = scoreArray[i][j];
                result.studentNum = i;
            }
        }
    }
    return result;
}

double Problem_8_14_4(double **scoreArray) {
    double *studentAverage, result = 0.;
    studentAverage = Problem_8_14_1(scoreArray);
    for (int i = 0; i < 10; ++i) {
        result += studentAverage[i];
    }
    result = result * result / -100.;
    for (int i = 0; i < 10; ++i) {
        result += studentAverage[i] * studentAverage[i] / 10.;
    }
    return result;
}

