#include <stdio.h>

int main()
{
    int sum = 0;
    int count = 0;
    float avg;

    // ����ɼ������
    for(int i = 0; i < 5; i++) {
        int score;
        printf("������� %d ��ѧ���ĳɼ���", i + 1);
        scanf("%d", &score);
        sum += score;
    }

    avg = (float)sum / 5;

    // �ٴ��������ڱȽ�
    for(int i = 0; i < 5; i++) {
        int score;
        printf("���ٴ������ %d ��ѧ���ĳɼ���", i + 1);
        scanf("%d", &score);
        if(score > avg) {
            count++;
        }
    }

    printf("ƽ����: %.2f\n", avg);
    printf("����ƽ���ֵ�����: %d\n", count);

    return 0;
}
