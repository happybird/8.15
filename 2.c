#include <stdio.h>

char* itoa(int x,char* str)
{
    int i = 0;
    int tmp = 0;
    int len;
    do
    {
    str[i] = x % 10 + '0';
    x = x / 10;
    i++;
    }
    while(x % 10 != 0 );
    str[i] = '\0';
    len  = i;
    for( i = 0;i < len /2;i++)
    {
    tmp = str[i];
    str[i] = str[len -1 - i];
    str[len - 1 - i] = tmp;

    }
   
    return str;
}
int main(int argc, const char *argv[])
{
    int a = 123;
    char result[23];
    printf("hello itoa");
    itoa(a,result);
    printf("123 ->%s",result);
    return 0;
}
