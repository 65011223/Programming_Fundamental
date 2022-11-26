//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
//solution1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c,help;
	printf("Enter number (a b c); ");
	scanf("%d %d %d", &a, &b, &c);
	if (b < a) { help = a; a = b; b = help; }
	if (c < b) { help = b; b = c; c = help; }
	if (b < a) { help = a; a = b; b = help; }
	//printf("%d %d %d", a, b, c);
	printf("sum of least and middle = %d", a + b);
	return 0;
}
