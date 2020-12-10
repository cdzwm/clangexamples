#include <stdio.h>
struct student
{
    char name[10];
    char number[10];
    int a;
    int b;
    int c;
};

struct student all[4];

int main()
{
    int i, j, k = 0, temp = -1;
    int aa, ab, ac;
    int chance[4];
    int aa1 = 0, ab1 = 0, ac1 = 0;
    printf("请输入学生的姓名， 学号， 三科成绩：\n");
    for (i = 0; i < 4; i++)
    {
        scanf("%s %s %d %d %d", all[i].name, all[i].number, &all[i].a, &all[i].b, &all[i].c);
    }

    //平均分
    for (i = 0; i < 4; i++)
        aa1 += all[i].a;
    for (i = 0; i < 4; i++)
        ab1 += all[i].b;
    for (i = 0; i < 4; i++)
        ac1 += all[i].c;
    aa = aa1 / 4;
    ab = ab1 / 4;
    ac = ac1 / 4;
    printf("%d\t%d\t%d\t\n", aa, ab, ac);

    //开始排序
    for (i = 0; i < 4; i++)
    {
        chance[i] = all[i].a + all[i].b + all[i].c;
    }

    for (i = 0; i < 4; i++)
    {
        if (chance[i] > temp)
        {
            temp = chance[i];
            k = i;
        }
    }

    printf("%s %s %d %d %d\n", all[k].name, all[k].number, all[k].a, all[k].b, all[k].c);
    return 0;
}
