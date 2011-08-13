/*进制转换 */
#include <stdio.h>

int atoi(const char * str)
{
    int i = 0;
    int result = 0;

    while(str[i] != '\0')
    {
        result = result * 10 + (str[i] -  '0');

        i ++;
    }

    return result;

}
int main(void)
{
    char str[4] = "123";
    int result = 0; 
    
    result = atoi(str);
    printf("hello,demo atoi\n");
    printf("123->%d\n",result);
    
    return 0;
}
