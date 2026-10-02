#include <stdio.h>
#include <stdlib.h>

/*
 * 09_input_validation.c
 * 演示检查 scanf 返回值以及使用 fgets + strtol 做更严格的解析
 */

int main(void) {
    int x;
    printf("请输入一个整数: ");
    if (scanf("%d", &x) != 1) {
        fprintf(stderr, "scanf 输入无效，清理 stdin。\n");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        return 1;
    }
    printf("你输入了: %d\n", x);

    char buf[100];
    printf("使用 fgets 再输入一个整数: ");
    if (!fgets(buf, sizeof buf, stdin)) return 1;
    char *end;
    long val = strtol(buf, &end, 10);
    if (end == buf || (*end != '\n' && *end != '\0')) {
        fprintf(stderr, "数字解析无效\n");
        return 1;
    }
    printf("解析结果: %ld\n", val);
    return 0;
}
