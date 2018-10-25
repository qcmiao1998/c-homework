#include "Homework_1025.h"

int main(){
    printf("%lf\n", Problem_6_11(41.));
    printf("%lf\n", Problem_6_12());
    Problem_6_14();
    return 0;
}

double Problem_6_11(double radicand) {
    if (radicand < 0.) return -1.; // Return -1 for radicand below 0.
    double result = 1., temp;
    do{
        temp = result;
        result = 0.5 * (temp + radicand / temp);
    } while (temp - result <= -0.00001 || temp - result >= 0.00001);
    return result;
}

double Problem_6_12() {
    double result = 1.5, temp;
    do{
        temp = result;
        result = temp - (2 * pow(temp, 3.) - 4 * pow(temp, 2.) + 3. * temp - 6.) / (6. * pow(temp, 2.) - 8.0 * temp + 3.);
    } while (temp - result <= -0.00001 || temp - result >= 0.00001);
    return result;
}

void Problem_6_14() {
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < abs(3 - i); ++j) {
            putchar(' ');
        }
        for (int k = 0; k < 7 - 2 * abs(3 - i); ++k) {
            putchar('*');
        }
        putchar('\n');
    }
}

