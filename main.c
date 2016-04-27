#include <stdio.h>
#include <stdlib.h>
void swap(){
    int a,b;
    printf("请输入a和b\n");
    scanf("%d%d",&a,&b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("交换后a=%d,b=%d\n",a,b);
}
int main()
{
    swap();
    printf("Hello world!\n");
    return 0;
}
