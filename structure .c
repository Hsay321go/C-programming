#include<stdio.h>
struct student {
	int roll;
	char name[10];
};
int main()
{
	    int      a1=10;
struct  student  s1={1,"xyz"};
struct  student  *p;
struct  student  a[10]; 

p=&s1;
printf("%d\n",s1.roll);
printf("%s\n",s1.name);

printf("%d\n",p->roll);
printf("%s\n",p->name);

scanf("%d",&a[1].roll);
scanf("%s",&a[1].name);

printf("%d\n",a[1].roll);
printf("%s\n",a[1].name);

scanf("%d",&a[2].roll);
scanf("%s",&a[2].name);

printf("%d\n",a[2].roll);
printf("%s\n",a[2].name);
}
