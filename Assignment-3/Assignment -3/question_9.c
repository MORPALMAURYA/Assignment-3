/* 9. write a program to  find the greatest among three given numbers.
print numer once if the greater number oppears two or three time.*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enetr a number ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>= b&& a>=c)

    printf("%d is greater \n ",a);

    if(b>=a && b>=c)

        printf("%d is greater \n",b);

    if(c>=a && c>=b)
    printf("%d is greater \n",c);
    
         
    return 0;
    
}