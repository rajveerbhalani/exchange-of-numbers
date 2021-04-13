#include<stdio.h>
void main()
{
int x=10,y=20;
printf(" the value of x and y before swapping are :- x = %d y=%d",x,y);
x=x+y ;
y=x-y;
x=x-y;
printf(" the value of x and y after swapping are :- x = %d y=%d",x,y);
return 0;
}
