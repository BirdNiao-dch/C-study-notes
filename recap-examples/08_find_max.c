#include <stdio.h>
#include <limits.h>

/*
 * 08_find_max.c
 * 求数组最大值与最大值下标的稳健实现
 */

int findmax_value(int a[], int n) {
    if (a == NULL || n <= 0) return INT_MIN;
    int max = a[0];
    for (int i = 1; i < n; ++i) if (a[i] > max) max = a[i];
    return max;
}

int findmax_index(int a[], int n) {
    if (a == NULL || n <= 0) return -1;
    int idx = 0;
    for (int i = 1; i < n; ++i) if (a[i] > a[idx]) idx = i;
    return idx;
}

int main(void) {
    int a[] = {3,7,2,9,5};
    int n = sizeof(a)/sizeof(a[0]);
    printf("最大值 = %d\n", findmax_value(a, n));
    printf("最大值下标 = %d\n", findmax_index(a, n));
    return 0;
}
