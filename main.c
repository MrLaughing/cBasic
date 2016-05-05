#include "stdio.h"
#include <math.h>
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
void testio(){
    char a;
    int b = 66;
    a = getchar();//getchar可获取输入的第一个(仅单个)字符
    putchar(a);//打印字符a
    putchar('\n');
    printf("将b转换为字符是：%c\n",b);//打印字符
    putchar(b);
    putchar('\n');
    int c;
    float d;
    printf("scanf输入一系列字符，c和d：\n");
    scanf("%d%f",&c,&d);
    printf("输入的c是%4d，d是%f",c,d);//%4d 4是指输出宽度为4的整型数
}
/*计算三角形面积*/
void area(){
    float a,b,c,area;
    printf("请输入a,b,c\n");
    scanf("%f,%f,%f",&a,&b,&c);
    float s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("面积是：%5.3f",area);
}
int main()
{
    area();
    testio();
    swap();
    printf("Hello world!\n");
    return 0;
}
