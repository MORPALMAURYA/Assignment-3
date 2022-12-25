/* Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed*/
#include<stdio.h>
int main()
{
          int math,computer,management,history,clanguage  ,total;
          float per;
          printf("Enter subject number:\n");

          scanf("%d %d %d %d %d",&math,&computer,&management,&history,&clanguage);

          total=math+computer+management+history+clanguage;

          printf("Total marks of student is %d\n",total);

          if(math>=33 && computer>=33 && management>=33 && history>=33 && clanguage>=33)
          {
                    printf("student is pass\n");
                    per=total/5.0;
                    printf("percentage of marks is %.2lf\n",per);
          }
          else
          printf("student is fail");
          return 0;
}