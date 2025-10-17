// wap to printf a value of variable using pointers
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10;
	int *p;
	p=&a;
	printf("sizeof pointer is:%d",sizeof(p));
	printf("\nvalue of p is:%x",p);//adress of a
	printf("\nAdress of p is:%x",&p);//adress of p
	printf("\nadress of a is:%x",&a);//adress of a
	printf("\nvalue of a is:%d",*p);//variable value (value at adress)
}
