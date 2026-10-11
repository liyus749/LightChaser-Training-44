# 01 C语言基础 · 动手练习

对应教程 1.11 的练习清单，每个练习一个 `.c` 文件。

| 练习 | 文件 |
| --- | --- |
| Hello World | `hello.c` |
| 简易计算器（+ - * /，除数为 0 要提示） | `calculator.c` |
| 打印 1~100 的奇数和 | `odd_sum.c` |
| 用指针交换两个变量的值 | `swap.c` |
| 用 malloc 动态申请数组求平均值 | `average.c` |
| 成绩单（结构体，可选进阶） | `grade.c` |

## 编译和运行

在 `01_C语言基础` 目录打开终端，把源文件名换成你要跑的即可：

```bash
# Windows
gcc hello.c -o hello.exe
.\hello.exe

# Linux / macOS
gcc hello.c -o hello
./hello
```

需要控制台输入的练习（`calculator`、`average`、`grade`）运行后按提示输入即可。

## 几个对照答案

- `odd_sum`：1~100 的奇数和 = **2500**
- `swap`：交换前 `x = 3, y = 8`，交换后 `x = 8, y = 3`
