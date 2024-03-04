#define  _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>

//int main() 
//{
//    char standard_answers[20] = { 'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D' };
//    char student_answers[20];
//    int correct_count = 0;
//    int wrong_count = 0;
//    int wrong_answers[20];
//
//    printf("�����뿼����20���𰸣�ֻ������ A��B��C��D����\n");
//
//    for (int i = 0; i < 20; i++) 
//    {
//        do {
//            scanf( " %c", &student_answers[i]); // ע��ո񣬱����ȡ��һ���ַ���Ļ��з�
//            if (student_answers[i] != 'A' && student_answers[i] != 'B' && student_answers[i] != 'C' && student_answers[i] != 'D') {
//                printf("������Ч�����������루ֻ������ A��B��C��D����\n");
//            }
//        } while (student_answers[i] != 'A' && student_answers[i] != 'B' && student_answers[i] != 'C' && student_answers[i] != 'D');
//
//        if (student_answers[i] == standard_answers[i]) 
//        {
//            correct_count++;
//        }
//        else 
//        {
//            wrong_answers[wrong_count] = i + 1; // ��¼�����
//            wrong_count++;
//        }
//    }
//
//    printf("\n���Գɼ���\n");
//    if (correct_count >= 12) {
//        printf("��ϲ������ͨ����\n");
//    }
//    else {
//        printf("���ź�������δͨ����\n");
//    }
//
//    printf("���������%d\n", correct_count);
//    printf("���������%d\n", wrong_count);
//    printf("������ţ�");
//    for (int i = 0; i < wrong_count; i++) {
//        printf("%d ", wrong_answers[i]);
//    }
//
//    return 0;
//}


#include <stdio.h>

#define MONTHS 12

int main() {
    float rainfall[MONTHS];
    float totalRainfall = 0;
    float averageRainfall;
    float maxRainfall = 0, minRainfall = 0;
    int maxMonth, minMonth;

    // �û�����ÿ�½�����
    printf("������ÿ���µĽ�������\n");
    for (int i = 0; i < MONTHS; i++) {
        do {
            printf("��%d���£�", i + 1);
            scanf("%f", &rainfall[i]);

            if (rainfall[i] < 0) {
                printf("����Ľ���������Ϊ���������������롣\n");
            }
        } while (rainfall[i] < 0);

        totalRainfall += rainfall[i];

        // ����������С�����������Ӧ���·�
        if (i == 0) {
            maxRainfall = minRainfall = rainfall[i];
            maxMonth = minMonth = i + 1;
        }
        else {
            if (rainfall[i] > maxRainfall) {
                maxRainfall = rainfall[i];
                maxMonth = i + 1;
            }
            if (rainfall[i] < minRainfall) {
                minRainfall = rainfall[i];
                minMonth = i + 1;
            }
        }
    }

    // ����ƽ��������
    averageRainfall = totalRainfall / MONTHS;

    // ��ʾ���
    printf("\nһ���ڵ��ܽ�������%f\n", totalRainfall);
    printf("ƽ��ÿ�µĽ�������%f\n", averageRainfall);
    printf("�����������·ݣ�%d�£���������%f\n", maxMonth, maxRainfall);
    printf("��������С���·ݣ�%d�£���������%f\n", minMonth, minRainfall);

    return 0;
}