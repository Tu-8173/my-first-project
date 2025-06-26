#include <stdio.h>

int main()
{
    int sum = 0;
    int count = 0;
    float avg;

    // 输入成绩并求和
    for(int i = 0; i < 5; i++) {
        int score;
        printf("请输入第 %d 个学生的成绩：", i + 1);
        scanf("%d", &score);
        sum += score;
    }

    avg = (float)sum / 5;

    // 再次输入用于比较
    for(int i = 0; i < 5; i++) {
        int score;
        printf("请再次输入第 %d 个学生的成绩：", i + 1);
        scanf("%d", &score);
        if(score > avg) {
            count++;
        }
    }

    printf("平均分: %.2f\n", avg);
    printf("高于平均分的人数: %d\n", count);

    return 0;
}
