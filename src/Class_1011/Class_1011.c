#include "Class_1011.h"

int main() {
    printf_s("Num Count: ");
    int numCount;
    scanf("%d", &numCount);
    printf_s("Type Nums:\n");
    int * nums = (int *)malloc(numCount * sizeof(int));
    for (int i = 0; i < numCount; ++i) {
        scanf("%d", &nums[i]);
    }
    intSort(numCount, nums);
    for (int j = 0; j < numCount; ++j) {
        printf("%d; ", nums[j]);
    }
    return 0;
}

void intSort(int length, int * array) {
    int temp;
    bool isFinish;
    do {
        isFinish = true;
        for (int i = 0; i < length - 1; ++i) {
            if (array[i] > array[i+1]) {
                isFinish = false;
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    } while (!isFinish);
}
