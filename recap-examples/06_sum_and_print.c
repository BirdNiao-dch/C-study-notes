#include <stdio.h>

/*
 * 06_sum_and_print.c
 * 计算数组元素之和（数组作为参数传递）
 */

void sumAndPrint(const int a[], int n) {
    long sum = 0;
    for (int i = 0; i < n; ++i) sum += a[i];
    printf("sum = %ld\n", sum);
}

int main(void) {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    sumAndPrint(arr, n);
    return 0;
}
