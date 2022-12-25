// write a program to check whether a given number is an even or odd number.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);

    if((num%2)==0)
    printf("Number is even \n");
    else
    printf("Number is odd \n");
    return ;

}