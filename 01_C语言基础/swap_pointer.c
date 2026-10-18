#include <stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int x = 3, y = 8;

    printf("交换前：x = %d, y = %d\n", x, y);
    swap(&x, &y);           // 传地址，函数才能改到 x、y
    printf("交换后：x = %d, y = %d\n", x, y);

    return 0;
}
