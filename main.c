#include <stdio.h>
#include <stdlib.h>
void swap(){
    int a,b;
    printf("������a��b\n");
    scanf("%d%d",&a,&b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("������a=%d,b=%d\n",a,b);
}
int main()
{
    swap();
    printf("Hello world!\n");
    return 0;
}
