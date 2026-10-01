//无参无返回值

#include<stdio.h>
void printhello() {
    printf("hello\n");
}
int main() {
    printhello();
    return 0;
}

//无参有返回值

#include<stdio.h>
int getnumber() {
    return 123;
}
int main() {
    int num = getnumber();
    printf("%d\n", num);
    return 0;
}

//有参无返回值

#include<stdio.h>
void printmax(int a, int b) {
    int max = a > b ? a : b;
    printf("max = %d\n", max);
}
int main() {
    int a, b;
    scanf("%d%d", &a,&b);
    printmax(a,b);
    return 0;
}

//有参有返回值

#include<stdio.h>
int max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int n = max(a,b);
    printf("%d\n", n);
    return 0;
}


