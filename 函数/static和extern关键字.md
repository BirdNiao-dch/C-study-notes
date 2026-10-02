**<font style="color:#117CEE;">static和extern  
</font>**static 和 extern 都是c语言中的关键字  
static 是静态的的意思，可以用来：  
修饰局部变量  
修饰全局变量  
修饰函数  
extern是 是用来声明外部符号的。



<font style="color:#117CEE;">作用域：起作用的范围</font>

<font style="color:#117CEE;">局部变量的作用域：</font>

例如：

```c
#include<stdio.h>
int main() {
    {
        int a = 10;
        printf("%d\n", a);
    }
    printf("%d\n", a);    //这个位置就不是变量所在的局部范围
    return 0;
}
```

<font style="color:#117CEE;">全局变量的作用域：</font>

整个工程都可以使用

也可以跨文件使用：需要用到extern来声明外部符号

例如：在文件test2中声明 `int a = 0；`

   在文件test1中要使用a，可在顶部写`extern int a；`



<font style="color:#117CEE;">生命周期：</font>

从变量的创建到销毁的阶段

局部变量的生命周期：进入作用域，变量创建，生命周期开始，出作用域，变量销毁生命周期结束

全局变量的生命周期：整个程序的生命周期



**<font style="color:#117CEE;">static的使用：</font>**

1.修饰局部变量

```c
#include<stdio.h>
void test() {
    int n = 10;                  //创建了局部变量
    n++;
    printf("%d ", n);        
}                                //出这个函数时生命周期结束，每次调用函数时n会被重新创建
int main() {
    int i = 0;
    for (i = 0;i < 5;i++) {
        test();
    }
    return 0;
}
```

```c
#include<stdio.h>
void test() {
    static int n = 10;
    n++;
    printf("%d ", n);           //出函数时n不被销毁，每次调用函数n不会被重新创建
}
int main() {
    int i = 0;
    for (i = 0;i < 5;i++) {
        test();
    }
    return 0;
}
```

2.修饰全局变量

一个全局变量被static修饰时，就不能在其他源文件中使用（即使用extern声明了也无法使用），外部连接属性变成内部连接属性

__

_修饰函数同理_
