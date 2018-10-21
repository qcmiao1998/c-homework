#include "Homework_1018.h"

int main(){
    printf("%ld\n", Problem_6_4());
    printf("%lf\n", Problem_6_5());
    printf("%lf\n", Problem_6_8());
    return 0;
}

long Problem_6_4(){
    long result = 0;
    for (int n = 1; n <= 20; n++){
        long tempproduct = 1;
        for(int i = 2; i <= n; i++){
            tempproduct *= i;
        }
        result += tempproduct;
    }
    return result;
}

double Problem_6_5(){
    double sum = 0;
    for (int i = 1; i <= 100; i++){
        sum += i;
    }
    for (int j = 1; j <= 50; j++){
        sum += j^2;
    }
    for (int k = 1; k <= 10.; k++){
        sum += 1/(double)k;
    }
    return sum;
}

double Problem_6_8(){
    double num1, num2;
    num1 = 2.;
    num2 = 1.;
    double sum = 0.;
    for (int i = 1; i <=20; i++){
        sum += num1/num2;
        double temp = num2;
        num2 = num1;
        num1 += temp;
    }
    return sum;
}