//write a program to find minimum number from the given 2 number using if else.

#include<stdio.h>
#include<conio.h>

void main (){
int a = 8;
int b = 3;

clrscr();

 printf("enter the value of the first number %d\n",a);
 printf("enter the value of the second number %d\n",b);


if(a<b){
 printf("the minimum value is %d\n",a);
 }else{
 printf("the minimum value is %d\n",b);
 }
getch();
}