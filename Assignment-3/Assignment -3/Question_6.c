/* 5.write a program to print greater between two number print one number
 if both are the some.*/

 #include<stdio.h>
 int main()
 {
    int number1, number2;

    printf("Enter a number \n");
    scanf("%d %d",&number1 ,&number2 );

    if(number1>number2)

    printf("number 1 is greater \n");

     else if(number1==number2)

    printf("both are equal \n");

    else 
    printf("number 2 is grater \n");
 
    return 0;
 }