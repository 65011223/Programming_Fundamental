//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)
//solution2
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c,sum;
	printf("Enter number (a b c); ");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		if (b < c) { sum = a + b; }
		else { sum = a + c; }
	}
	else
	{
		if (a < c) { sum = b + a; }
		else { sum = b + c; }
	}
	//printf("%d %d %d", a, b, c);
	printf("sum of least and middle = %d", sum);
	return 0;
}
