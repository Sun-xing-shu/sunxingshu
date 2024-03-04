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
//    printf("请输入考生的20个答案（只能输入 A、B、C、D）：\n");
//
//    for (int i = 0; i < 20; i++) 
//    {
//        do {
//            scanf( " %c", &student_answers[i]); // 注意空格，避免读取上一个字符后的换行符
//            if (student_answers[i] != 'A' && student_answers[i] != 'B' && student_answers[i] != 'C' && student_answers[i] != 'D') {
//                printf("输入无效，请重新输入（只能输入 A、B、C、D）：\n");
//            }
//        } while (student_answers[i] != 'A' && student_answers[i] != 'B' && student_answers[i] != 'C' && student_answers[i] != 'D');
//
//        if (student_answers[i] == standard_answers[i]) 
//        {
//            correct_count++;
//        }
//        else 
//        {
//            wrong_answers[wrong_count] = i + 1; // 记录错题号
//            wrong_count++;
//        }
//    }
//
//    printf("\n考试成绩：\n");
//    if (correct_count >= 12) {
//        printf("恭喜，考试通过！\n");
//    }
//    else {
//        printf("很遗憾，考试未通过。\n");
//    }
//
//    printf("答对题数：%d\n", correct_count);
//    printf("答错题数：%d\n", wrong_count);
//    printf("错题题号：");
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

    // 用户输入每月降雨量
    printf("请输入每个月的降雨量：\n");
    for (int i = 0; i < MONTHS; i++) {
        do {
            printf("第%d个月：", i + 1);
            scanf("%f", &rainfall[i]);

            if (rainfall[i] < 0) {
                printf("输入的降雨量不能为负数，请重新输入。\n");
            }
        } while (rainfall[i] < 0);

        totalRainfall += rainfall[i];

        // 更新最大和最小降雨量及其对应的月份
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

    // 计算平均降雨量
    averageRainfall = totalRainfall / MONTHS;

    // 显示结果
    printf("\n一年内的总降雨量：%f\n", totalRainfall);
    printf("平均每月的降雨量：%f\n", averageRainfall);
    printf("降雨量最大的月份：%d月，降雨量：%f\n", maxMonth, maxRainfall);
    printf("降雨量最小的月份：%d月，降雨量：%f\n", minMonth, minRainfall);

    return 0;
}