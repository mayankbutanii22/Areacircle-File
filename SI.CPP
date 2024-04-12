#include<stdio.h>
#include<conio.h>
main()
{
int p,r,t;
float si;
clrscr();
printf("Enter a principle amount,rate and time; ");
scanf("%d%d%d",&p,&r,&t);
printf("%d %d %d",p,r,t);
si=p*r*t/100;
printf("is the simple interest is %.2f",si);

getch();
}
