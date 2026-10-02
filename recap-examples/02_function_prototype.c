#include <stdio.h>

/*
 * 02_function_prototype.c
 * 演示函数声明（原型）在使用前的重要性
 */

/* 声明（原型） */
void greet(const char *name);

int main(void) {
    greet("Alice");
    return 0;
}

/* 定义（实现） */
void greet(const char *name) {
    printf("Hello, %s!\n", name);
}
