/*
 * 练习：用指针交换两个变量的值
 * 关键点：函数收到的是"地址"，通过 * 解引用就能改到 main 里的变量。
 */
#include <stdio.h>

// 交换 *a 和 *b 指向的两个整数
void swap(int *a, int *b) {
    int tmp = *a;       // 先把 a 指向的值备份
    *a = *b;            // 把 b 指向的值写进 a 指向的格子
    *b = tmp;           // 把备份写回 b 指向的格子
}

int main() {
    int x = 3, y = 8;

    printf("交换前：x = %d, y = %d\n", x, y);
    swap(&x, &y);       // 传地址，函数才能真正改到 x、y
    printf("交换后：x = %d, y = %d\n", x, y);

    return 0;
}
