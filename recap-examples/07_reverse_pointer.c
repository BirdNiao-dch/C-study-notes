#include <stdio.h>

/*
 * 07_reverse_pointer.c
 * 使用指针算术就地反转数组（指针实现）
 */

void reverse_ptr(int *a, int n) {
    if (!a || n <= 1) return;
    int *l = a, *r = a + n - 1;
    while (l < r) {
        int t = *l;
        *l = *r;
        *r = t;
        ++l; --r;
    }
}

int main(void) {
    int a[] = {10,20,30,40};
    int n = sizeof(a) / sizeof(a[0]);
    reverse_ptr(a, n);
    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
