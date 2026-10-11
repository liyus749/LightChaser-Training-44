/*
 * 练习：打印 1~100 的奇数和
 * 思路：遍历 1~100，能被 2 整除的是偶数，余数为 1 的是奇数，累加即可。
 */
#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 1) {       // i 是奇数
            sum += i;           // 累加到 sum
        }
    }

    printf("1~100 的奇数和 = %d\n", sum);
    return 0;
}
