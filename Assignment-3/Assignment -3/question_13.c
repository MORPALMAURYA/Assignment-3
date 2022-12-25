//13 . Write a program to check whether a given number is divisible by 3 and divisible by 2

#include<stdio.h>
int main()
{
          int num;
          printf("Enter number :\n");
          scanf("%d",&num);
          if(num%3==0 && num%2==0)
          {
                    printf("%d is divisible by 3 nad 2",num);
          }
          else
          {
                    printf("%d is not divisible by 3 AND 2",num);
          }
          return 0;
}