// write a program to find if a given number is neutral or not using a ladder if else .

#include<stdio.h>
#include<conio.h>

void main(){
int v;

clrscr();
printf("enter the value of first number :");
scanf("%d",&v);

if(v<0){
printf("the number is negative :");
}else if (v == 0){
printf("the number is netural:");
}else{
printf("the number is positive :");
}
getch();
}