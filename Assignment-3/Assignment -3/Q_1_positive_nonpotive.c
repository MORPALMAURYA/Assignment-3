/*   Assignment-3
    topic-decision control statement
    Q.1 write a program to check whether a given is positive or non positive. 
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number \n");
    scanf("%d",&num);

    if(num>0)
    printf("Number is positive \n");

    else if(num<0)
    printf("Number is non positive \n");

    else
    printf("Number is zero\n");
    return 0;
}