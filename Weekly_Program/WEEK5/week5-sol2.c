#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//partนี้เป็นpartเก็บค่าความกว้างของจอผู้ใช้ซึ่งออกมาเป็นหน่วยตัวอักษร จึงสัมพันธ์กับstrlen()
#ifdef _WIN32
#include <Windows.h>
int GetColumnWidth()
{
    CONSOLE_SCREEN_BUFFER_INFO info;
    HANDLE out;
    
    if (!(out = GetStdHandle(STD_OUTPUT_HANDLE)) ||
        !GetConsoleScreenBufferInfo(out, &info))
        return 80;
    return info.dwSize.X;
}//GetColumnWidth
#else
int GetColumnWidth() {return 80;}
#endif
//partการทำงาานจริงเพื่อแสดงผลข้อความที่กลางจอ
int main()
{
    const char *s = "Hey, I'm centered!";

    const int total_width = GetColumnWidth();
    const int s_width = strlen(s);
    const int field_width = (total_width - s_width) / 2 + s_width;

    printf("%*s\n", field_width, s);

    return 0;
}//main
