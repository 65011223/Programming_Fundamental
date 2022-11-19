//จงเขียนโปรแกรมรับประโยค 1 ประโยคแล้วแสดงผลประโยคนั้นตรงกลางจอภาพ (Level 2)
//solution2 เนื่องจากหนึ่งบรรทัดมีความกว้าง 80 ตัวอักษร
#include<stdio.h>
#include<string.h>
#include<windows.h>
// void gotoxy(int,int);
int main()
{
    char str[80];
    printf("Enter your message : ");
    scanf("%s",str);
    int length = strlen(str);
    int y=0; int x = 80/2 - length/2;
    // gotoxy(x,y);
    printf("%s",str);
    return 0;
}
// void gotoxy(int x,int y)
// {
//     COORD c = {x,y};
//     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
// }
