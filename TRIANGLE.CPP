#include<stdio.h>
#include<conio.h>
main()
{
int l,h;
float area;
clrscr();
printf("Enter a lenth and haight value: ");
scanf("%d%d",&l,&h);
printf("%d%d",l,h);
area=1*l*h;
printf("Area of triangle is %.2f",area);

getch();
}