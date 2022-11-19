#include<stdio.h>
#include<windows.h>
int main()
{
    int width = GetSystemMetrics(SM_CXSCREEN);
    int height = GetSystemMetrics(SM_CYSCREEN);
    char str[1536];
    printf("Enter your message : ");
    scanf("%s",str);
    int length = strlen(str);
    int blankx = (width-length)/2;
    // int blanky = (height);
    for(int i = 0 ; i<blankx; i++)
    {
        printf(" ");
    }
    printf("%s",str);
    return 0;
}
