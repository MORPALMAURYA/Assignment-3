/* Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.
*/
#include<stdio.h>
int main()
{
          char ch;
          printf("Enter a character:\n");
          scanf("%c",&ch);
          if(ch>='A' && ch<='Z')
          {
                    printf("%c character is Uppercase",ch);
          }
          else if(ch>='a' && ch<='z')
          {
                    printf("%c character is Lowercase",ch);

          }
          else if(ch=='0' && ch=='9')
          {
                    printf("%d is digit");
          }
          else{
                    printf("this special character");
          }
          return 0;
}