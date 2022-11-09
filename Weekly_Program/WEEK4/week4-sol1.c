//จงเขียนโปรแกรมรับชื่อ นามสกุล และรหัสนักศึกษาของนักศึกษา 3 คน แล้วนำมาจัดอยู่ในตารางโดยให้ชื่อและนามสกุลของนักศึกษาอยู่ชิดด้านซ้ายของตาราง ส่วนรหัสอยู่ชิดขวาของตารางดังรูป (Level 1)
//solution1
#include <stdio.h>
#include <string.h>
int main()
{
    char name1[13],name2[13],name3[13],surname1[12],surname2[12],surname3[12],id1[13],id2[13],id3[13];
    printf("Name of first student: ");
    scanf("%s",name1);
    printf("Surname of first student: ");
    scanf("%s",surname1);
    printf("ID of first student: ");
    scanf("%s",id1);
    printf("Name of second student: ");
    scanf("%s",name2);
    printf("Surname of second student: ");
    scanf("%s",surname2);
    printf("ID of second student: ");
    scanf("%s",id2);
    printf("Name of third student: ");
    scanf("%s",name3);
    printf("Surname of third student: ");
    scanf("%s",surname3);
    printf("ID of third student: ");
    scanf("%s",id3);
    printf("+-------------+------------+-------------+\n");
    printf("|%-13s|%-12s|%13s|\n",name1,surname1,id1);
    printf("|%-13s|%-12s|%13s|\n",name2,surname2,id2);
    printf("|%-13s|%-12s|%13s|\n",name3,surname3,id3);
    printf("+-------------+------------+-------------+");
    return(0);
}
