#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("要几个数？ ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("错误：请输入一个正整数\n");
        return 1;
    }

    double *arr = (double *)malloc((size_t)n * sizeof(double));
    if (arr == NULL) {
        printf("内存不足\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("请输入第 %d 个数：", i + 1);
        if (scanf("%lf", &arr[i]) != 1) {
            printf("输入错误\n");
            free(arr);
            return 1;
        }
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("平均值 = %.3f\n", sum / n);

    free(arr);
    arr = NULL;             // 释放后置空，避免野指针
    return 0;
}
