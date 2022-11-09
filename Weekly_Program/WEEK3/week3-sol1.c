/*จงเขียนโปรแกรมเพื่อหาค่า Body Mass Index จากค่าความสูงและน้ำหนัก ซึ่งมีสูตรการคำนวณดังนี้
BMI = Weight / Height2
เมื่อ Weight มีหน่วยเป็นกิโลกรัม และ Height มีหน่วยเป็นเมตร (เกณฑ์การแบ่งน้ำหนักโดยใช้ BMI , ต่ำกว่า 18.5 น้ำหนักต่ำกว่าเกณฑ์ , 18.5 - 24.9 ปกติ , 25.0 - 29.9 สูงกว่ามาตรฐาน , ตั้งแต่ 30.0 ขึ้นไป อ้วนเกินไป ) (Level 1)*/
//solution1
#include<stdio.h>
int main()
{
    float height,weight,BMI;
    printf("Enter your height in metre: ");
    scanf("%f",&height);
    printf("Enter your weight in kilogram: ");
    scanf("%f",&weight);
    BMI = weight/(height*height);
    printf("BMI = %.1f\n",BMI);
    if(BMI<18.5)
    {
        printf("underweight");
    }
    else if(BMI<25)
    {
        printf("normal");
    }
    else if(BMI<30)
    {
        printf("overweight");
    }
    else printf("obese");
    return 0;
}
