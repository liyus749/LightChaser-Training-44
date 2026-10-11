/*
 * 练习：用 malloc 动态申请数组求平均值
 * 要求：申请失败要处理，用完必须 free，并置空指针。
 */
#include <stdio.h>
#include <stdlib.h>     // 要用 malloc / free

int main() {
    int n;

    printf("要几个数？ ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("错误：请输入一个正整数\n");
        return 1;
    }

    // 申请 n 个 double 的空间
    double *arr = (double *)malloc((size_t)n * sizeof(double));
    if (arr == NULL) {          // 申请失败必须处理，否则下面会崩
        printf("内存不足\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("请输入第 %d 个数：", i + 1);
        if (scanf("%lf", &arr[i]) != 1) {
            printf("输入错误\n");
            free(arr);          // 出错也要释放，避免内存泄漏
            return 1;
        }
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("平均值 = %.3f\n", sum / n);

    free(arr);      // ★ 用完后必须释放
    arr = NULL;     // ★ 置空，防止变成野指针
    return 0;
}
