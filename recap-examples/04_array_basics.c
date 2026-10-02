#include <stdio.h>

/*
 * 04_array_basics.c
 * 数组的定义、初始化、遍历与长度计算示例
 */

int main(void) {
    int a1[5] = {1, 2, 3}; // 未初始化的元素将被置为 0
    int a2[] = {4, 5, 6, 7};
    int i;
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int n2 = sizeof(a2) / sizeof(a2[0]);

    printf("a1: ");
    for (i = 0; i < n1; ++i) printf("%d ", a1[i]);
    printf("\n");

    printf("a2: ");
    for (i = 0; i < n2; ++i) printf("%d ", a2[i]);
    printf("\n");
    return 0;
}
