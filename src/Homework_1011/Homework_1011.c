#include "Homework_1011.h"

int main(){
    printf("%f\n", Problem_5_5(10));
    printf("%c\n", Problem_5_6(80));
    Problem_5_7(123456);
    printf("%f", Problem_5_8(1234567));
}

double Problem_5_5(double x){
    double y;
    if (x < 1)
        y = x;
    else if (x >= 1 && x < 10)
        y = 2 * x -1;
    else
        y = 3 * x - 11;
    return y;
}

Grade Problem_5_6(int score) {
    Grade result;
    switch (score){
        case 90 ... 100:
            result = A;
            break;
        case 80 ... 89:
            result = B;
            break;
        case 70 ... 79:
            result = C;
            break;
        case 60 ... 69:
            result = D;
            break;
        default:
            result = E;
            break;
    }
    return result;
}

void Problem_5_7(unsigned int num) {
    int count = 0;
    unsigned int temp = num;
    while (temp != 0){
        temp = temp/10;
        count++;
    }
    printf("%d 位数\n", count);
    char * numchars = (char *)malloc(count * sizeof(char));
    sprintf(numchars, "%d", num);
    for (int i = 0; i < count; ++i) {
        printf("%c;", numchars[i]);
    }
    printf("\n");
    for (int j = count -1; j >= 0; --j) {
        printf("%c;", numchars[j]);
    }
    printf("\n");
}

# define USEIF false // set to false if want to use switch.
double Problem_5_8(double profit){
    double reward = 0;
#if USEIF
    if (profit <= 100000)
        reward = profit * 0.1;
    else if (profit > 100000 && profit <= 200000)
        reward = Problem_5_8(100000) + (profit - 100000) * 0.075;
    else if (profit > 200000 && profit <= 400000)
        reward = Problem_5_8(200000) + (profit - 200000) * 0.05;
    else if (profit > 400000 && profit <= 600000)
        reward = Problem_5_8(400000) + (profit - 400000) * 0.03;
    else if (profit > 600000 && profit <= 1000000)
        reward = Problem_5_8(600000) + (profit - 600000) * 0.015;
    else
        reward = Problem_5_8(1000000) + (profit - 1000000) * 0.01;
#else
    switch ((int)ceil(profit)){
        case 0 ... 100000:
            reward = profit * 0.1;
            break;
        case 100001 ... 200000:
            reward = Problem_5_8(100000) + (profit - 100000) * 0.075;
            break;
        case 200001 ... 400000:
            reward = Problem_5_8(200000) + (profit - 200000) * 0.05;
            break;
        case 400001 ... 600000:
            reward = Problem_5_8(400000) + (profit - 400000) * 0.03;
            break;
        case 600001 ... 1000000:
            reward = Problem_5_8(600000) + (profit - 600000) * 0.015;
            break;
        default:
            reward = Problem_5_8(1000000) + (profit - 1000000) * 0.01;
            break;
    }
#endif
    return reward;
}
