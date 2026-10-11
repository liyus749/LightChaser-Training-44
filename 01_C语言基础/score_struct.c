/*
 * 练习（可选进阶）：成绩单
 * 用一个结构体保存姓名和分数，录入后打印成绩单并统计平均分/最高分/最低分。
 */
#include <stdio.h>

#define MAX_STUDENTS 100
#define NAME_LEN 32

// 一个结构体存姓名和分数
typedef struct {
    char name[NAME_LEN];
    double score;
} Student;

int main() {
    Student list[MAX_STUDENTS];
    int n = 0;

    printf("请输入学生人数（1~%d）：", MAX_STUDENTS);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_STUDENTS) {
        printf("错误：人数不合法\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("第 %d 位，输入 姓名 分数：", i + 1);
        // %31s 限制名字最多 31 个字符，留一位给结束符 '\0'
        if (scanf("%31s %lf", list[i].name, &list[i].score) != 2) {
            printf("输入错误\n");
            return 1;
        }
    }

    printf("\n--- 成绩单 ---\n");
    printf("%-12s %6s\n", "姓名", "分数");

    double sum = 0.0;
    double max = list[0].score;
    double min = list[0].score;

    for (int i = 0; i < n; i++) {
        printf("%-12s %6.1f\n", list[i].name, list[i].score);
        sum += list[i].score;
        if (list[i].score > max) max = list[i].score;
        if (list[i].score < min) min = list[i].score;
    }

    printf("------------------------------\n");
    printf("平均分：%.1f  最高分：%.1f  最低分：%.1f\n",
           sum / n, max, min);

    return 0;
}
