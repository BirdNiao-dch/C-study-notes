#include <stdio.h>

/*
 * 06_modify_array.c
 * 演示函数内修改数组会影响调用者（就地修改）
 */

void set_first_zero(int a[], int n) {
    if (n > 0) a[0] = 0;
}

int main(void) {
    int arr[] = {5,6,7};
    set_first_zero(arr, 3);
    for (int i = 0; i < 3; ++i) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
