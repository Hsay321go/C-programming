#include<stdio.h>
int main()
{
	int a=10;
	int *p;
	int **q;
	int ***r;
	printf("\nthe value of a %d ",a);
	printf("\nthe address of a %p",&a);
	p=&a;
	printf("\nthe r value of pointer p is %p",p);
	printf("\nthe l value of p is %p",&p);
	printf("\nthe value of a by using pointer %d",*p);
	q=&p;
	printf("\nthe r value of pointer q is %p",q);
	printf("\nthe l value of q is %p",&q);
	printf("\nthe value of a by using pointer of pointer ie double pointer %d",**q);
	r=&q;
	printf("\nthe r value of pointer r is %p",r);
	printf("\nthe l value of q is %p",&r);
	printf("\nthe value of a by using pointer of pointer ie double pointer %d",***r);
}
