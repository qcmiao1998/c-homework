#include "Homework_1206.h"

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    Problem_10_4(10,4,arr);
    for (int i = 0; i < 10; ++i) {
        printf("%d;",arr[i]);
    }
    putchar('\n');
    printf("%d\n",Problem_10_6("test!!!"));

    char *strarray[] = {"test","abc","bac","bab","aac"};
    Problem_10_12(5,strarray);
    for (int i = 0; i < 5; ++i) {
        printf("%s\n",strarray[i]);
    }
    return 0;
}

void Problem_10_4(int n, int m, int *array){
    int temp[m];
    for (int i = 0; i < m; ++i) {
        temp[i] = array[n-m+i];
    }
    for (int i = 0; i < n-m; ++i) {
        array[n-1-i] = array[n-m-1-i];
    }
    for (int i = 0; i < m; ++i) {
        array[i] = temp[i];
    }
}

int Problem_10_6(const char *string){
    int count = 0;
    while (string[count] != '\0'){
        count++;
    }
    return count;
}

void Problem_10_12(int strc, char *strv[]){
    char *temp;
    _Bool isFinish;
    do {
        isFinish = 1;
        for (int i = 0; i < strc - 1; ++i) {
            int j = 0;
            _Bool isLarger = 0;
            while (strv[i][j] != '\0' && strv[i+1][j] != '\0'){
                if (strv[i][j] < strv[i+1][j])
                    break;
                if (strv[i][j] > strv[i+1][j]){
                    isLarger = 1;
                    break;
                }
                j++;
            }
            if (isLarger) {
                isFinish = 0;
                temp = strv[i];
                strv[i] = strv[i+1];
                strv[i+1] = temp;
            }
        }
    } while (!isFinish);
}