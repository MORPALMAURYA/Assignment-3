// 4.write a program to check whether a given number is a three digit number or not.

#include<stdio.h>
int main()
{
    int num;

    printf("enetr a number \n");
    scanf("%d",&num);

    if(num>99 && num<1000)

    printf("number is three digit \n");
    else
    printf("number is not three digit \n");
    return 0;

}