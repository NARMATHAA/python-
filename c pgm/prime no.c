#include<stdio.h>
void main()
{
int n ,num,flag=0;
printf("enter the number ");
scanf("%d",&num);
for(n=2;n<num/2;++n)
{
if(num%n==0)
{
flag=1;
break;
}}
if(flag==0)
{
printf("prime number");
}
else 
printf("not a prime number");
}
