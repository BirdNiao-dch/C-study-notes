#include <stdio.h>
#include <limits.h>

/*
 * 03_nested_and_recursive.c
 * 嵌套函数调用示例与分治法递归求数组最大值
 */

void f3(void) { puts("in f3"); }
void f2(void) { puts("in f2 -> 调用 f3"); f3(); }
void f1(void) { puts("in f1 -> 调用 f2"); f2(); }

int maxRecursive(int a[], int l, int r) {
    if (l > r) return INT_MIN;
    if (l == r) return a[l];
    int mid = l + (r - l) / 2;
    int L = maxRecursive(a, l, mid);
    int R = maxRecursive(a, mid + 1, r);
    return (L > R) ? L : R;
}

int main(void) {
    f1();

    int arr[] = {3, 1, 7, 4, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = maxRecursive(arr, 0, n - 1);
    printf("递归求最大值 = %d\n", mx);
    return 0;
}
