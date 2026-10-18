#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("简易计算器\n");
    printf("请输入表达式（例如 3 + 4）：");

    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        printf("输入格式错误，正确示例：3 + 4\n");
        return 1;
    }

    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("错误：除数不能为 0\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
        default:
            printf("错误：不支持的运算符 '%c'，只支持 + - * /\n", op);
            break;
    }

    return 0;
}
