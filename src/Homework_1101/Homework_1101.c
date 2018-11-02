#include "Homework_1101.h"

int main(){
    Problem_7_1();
    int array[3][3] = {1,2,3,4,5,6,7,8,9};
    printf("\n%d\n", Problem_7_3(array));
    int array2[5] = {7,6,4,3,1};
    int *arrayresult = Problem_7_4(5, array2, 8);
    for (int i = 0; i < 6; ++i) {
        printf("%d; ", arrayresult[i]);
    }
    putchar('\n');
    int **array3 = Problem_7_7(5);
    for (int j = 0; j < 5; ++j) {
        for (int i = 0; i < 5; ++i) {
            printf("%d; ", array3[j][i]);
        }
    }
    return 0;
}

void Problem_7_1() {
    int array[100];
    for (int i = 0; i < 100; ++i) {
        array[i] = i + 1;
        for (int j = 0; j < i; ++j) {
            if (array[i] % array[j] == 0 && array[j] != 1) {
                array[i] = 1;
                break;
            }
        }
        if (array[i] != 1 || i == 0) printf("%d; ", array[i]);
    }
}

int Problem_7_3(int array[3][3]) {
    return array[0][0] + array[1][1] + array[2][2] + array[0][2] + array[2][0];
}

int *Problem_7_4(int count, int *array, int addNum) {
    int *result = (int *)malloc((count + 1) * sizeof(int));
    if (array[0] < array[count - 1]){
        for (int i = 0; i < count; ++i) {
            if (addNum < array[i]){
                result[i] = addNum;
                for (int j = i; j < count; ++j) {
                    result[j + 1] = array[j];
                }
                return result;
            }
            result[i] = array[i];
        }
        result[count] = addNum;
        return result;
    } else{
        for (int i = 0; i < count; ++i) {
            if (addNum > array[i]){
                result[i] = addNum;
                for (int j = i; j < count; ++j) {
                    result[j + 1] = array[j];
                }
                return result;
            }
            result[i] = array[i];
        }
        result[count] = addNum;
        return result;
    }
}

int **Problem_7_7(int floor) {
    int **array = (int **)malloc(sizeof(int *) * floor);
    for (int i = 0; i < floor; ++i) {
        array[i] = (int *)malloc(sizeof(int) * floor);
        for (int j = 0; j < floor; ++j) {
            array[i][j] = 0;
        }
    }
    int m = 0, n = floor/2;
    int a, b;
    for (int j = 1; j <= floor*floor; ++j) {
        array[m][n] = j;
        if (m == 0 && n == floor -1) {
            m = 1;
            continue;
        }
        if (m == 0) a = floor - 1;
        else a = m - 1;
        if (n == floor - 1) b = 0;
        else b = n + 1;
        if (array[a][b] != 0){
            a = m + 1;
            b = n;
        }
        m = a;
        n = b;
    }
    return array;
}


