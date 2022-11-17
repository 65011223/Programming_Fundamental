//จงเขียนโปรแกรมรับชื่อ นามสกุล และรหัสนักศึกษาของนักศึกษา 3 คน แล้วนำมาจัดอยู่ในตารางโดยให้ชื่อและนามสกุลของนักศึกษาอยู่ชิดด้านซ้ายของตาราง ส่วนรหัสอยู่ชิดขวาของตารางดังรูป (Level 1)
//solution2 => พยายามแก้ปัญหาที่ใช้ตัวแปรเยอะ และมีการก๊อบวางในส่วนของการรับค่าเยอะเกินไป
#include <stdio.h>
#include <string.h>
int main()
{
    char for_input[3][10];
    strcpy(for_input[0],"name");
    strcpy(for_input[1],"surname");
    strcpy(for_input[2],"id");
    int num;
    printf("Enter number of students: ");
    scanf("%d",&num);
    char info[num][3][13]; //[number of students][number of infos][number of characters]
    for(int i = 0; i<num; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("Enter %s of student number #%d: ",for_input[j],i+1);
            scanf("%s",info[i][j]);
        }
    }
    //partแสดงผลตารางoutput
    printf("+-------------+------------+-------------+\n");
    for(int i = 0; i<num; i++)
    {
        int j = 0;
        printf("|%-13s|%-12s|%13s|\n",info[i][j],info[i][j+1],info[i][j+2]);
    }
    printf("+-------------+------------+-------------+\n");
    return(0);
}
