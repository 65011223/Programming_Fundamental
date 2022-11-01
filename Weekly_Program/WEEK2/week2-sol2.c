//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด (Level 1)
//solution2 ใช้printfแสดงผลบวกลบคูณหารแค่คำสั่งเดียว
#include<stdio.h>
int main()
{
    int a,b ;
    printf("num1: ") ;
    scanf("%d",&a);
    printf("num2: ");
    scanf("%d",&b);
    printf("num1 + num2 = %d\nnum1 - num2 = %d\nnum1 * num2 = %d\nnum1 / num2 = %d\n", a+b,a-b,a*b,a/b);
    return 0;
}
