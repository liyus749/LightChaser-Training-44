# 01 C语言基础 · 动手练习

对应教程 1.11 的练习清单，文件名按《提交格式说明》要求命名。

| 练习 | 文件 |
| --- | --- |
| Hello World | `hello.c` |
| 简易计算器（+ - * /，除数为 0 要提示） | `calculator.c` |
| 打印 1~100 的奇数和 | `odd_sum.c` |
| 用指针交换两个变量的值 | `swap_pointer.c` |
| 用 malloc 动态申请数组求平均值 | `average_malloc.c` |
| 成绩单（结构体，可选进阶） | `score_struct.c` |

## 编译和运行

在 `01_C语言基础` 目录打开终端（cmd），把源文件名换成你要跑的即可：

```bat
gcc hello.c -o hello
hello
```

> cmd 里直接敲程序名即可；`./hello` 是 Linux / Git Bash 的写法，在 cmd 里会报
> "不是内部或外部命令"。在 PowerShell 里要写 `.\hello`。

需要控制台输入的练习（`calculator`、`average_malloc`、`score_struct`）运行后按提示输入即可。

## 几个对照答案

- `odd_sum`：1~100 的奇数和 = **2500**
- `swap_pointer`：交换前 `x = 3, y = 8`，交换后 `x = 8, y = 3`
- `average_malloc`：输入 10 / 20 / 30 / 45，平均值 = **26.250**
