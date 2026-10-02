#include <stdio.h>

/*
 * 07_reverse_index.c
 * 使用下标交换法就地反转数组（索引实现）
 */

void reverse(int a[], int n) {
    if (a == NULL || n <= 1) return;
    for (int i = 0, j = n - 1; i < j; ++i, --j) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
}

int main(void) {
    int a[] = {1,2,3,4,5};
    int n = sizeof(a) / sizeof(a[0]);
    printf("反转前: ");
    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    printf("\n");
    reverse(a, n);
    printf("反转后: ");
    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
