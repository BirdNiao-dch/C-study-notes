# C 学习笔记 — 复习示例

该文件夹包含简洁可运行的 C 示例，覆盖函数、数组、sizeof 陷阱、数组作为参数、数组反转、递归、输入校验和常见调试技巧。使用 gcc 或 clang 编译（每个文件开头都有说明）。

包含文件：
- 01_functions_basic.c
- 02_function_prototype.c
- 03_nested_and_recursive.c
- 04_array_basics.c
- 05_sizeof_demo.c
- 06_sum_and_print.c
- 06_modify_array.c
- 07_reverse_index.c
- 07_reverse_pointer.c
- 08_find_max.c
- 09_input_validation.c

用法：
cd recap-examples
gcc -std=c11 -Wall -Wextra <file.c> -o <file>
./<file>
