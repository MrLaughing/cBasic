#include "stdio.h"
#include <math.h>
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
void testio(){
    char a;
    int b = 66;
    a = getchar();//getchar�ɻ�ȡ����ĵ�һ��(������)�ַ�
    putchar(a);//��ӡ�ַ�a
    putchar('\n');
    printf("��bת��Ϊ�ַ��ǣ�%c\n",b);//��ӡ�ַ�
    putchar(b);
    putchar('\n');
    int c;
    float d;
    printf("scanf����һϵ���ַ���c��d��\n");
    scanf("%d%f",&c,&d);
    printf("�����c��%4d��d��%f",c,d);//%4d 4��ָ������Ϊ4��������
}
/*�������������*/
void area(){
    float a,b,c,area;
    printf("������a,b,c\n");
    scanf("%f,%f,%f",&a,&b,&c);
    float s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("����ǣ�%5.3f",area);
}
int main()
{
    area();
    testio();
    swap();
    printf("Hello world!\n");
    return 0;
}
