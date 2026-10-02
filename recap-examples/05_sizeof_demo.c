#include <stdio.h>

/*
 * 05_sizeof_demo.c
 * 演示 sizeof 在 main 中与在函数内部的不同表现
 */

void demo(int arr[]) {
    printf("在 demo 中: sizeof(arr) = %zu 字节（指针大小）\n", sizeof(arr));
    printf("在 demo 中: sizeof(arr)/sizeof(arr[0]) = %zu （错误的元素计数）\n",
           sizeof(arr) / sizeof(arr[0]));
}

int main(void) {
    int a[8] = {0};
    printf("在 main 中: sizeof(a) = %zu 字节\n", sizeof(a));
    printf("在 main 中: 元素个数 = %zu\n", sizeof(a) / sizeof(a[0]));
    demo(a);
    return 0;
}
