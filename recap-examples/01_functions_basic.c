#include <stdio.h>

/*
 * 01_functions_basic.c
 * 简单的函数用法示例，以及带 scanf 校验的 getMaxFromInput
 */

/* 函数原型（可选） */
int add(int x, int y);
int getMaxFromInput(void);

int getMaxFromInput(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        fprintf(stderr, "输入错误\n");
        return 0;
    }
    return (a > b) ? a : b;
}

int add(int x, int y) {
    return x + y;
}

int main(void) {
    printf("请输入两个整数: ");
    int m = getMaxFromInput();
    printf("最大值 = %d\n", m);

    int s = add(3, 4);
    printf("3 + 4 = %d\n", s);
    return 0;
}
