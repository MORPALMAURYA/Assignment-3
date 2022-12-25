//12. Write a program to check whether a given alphabet is in uppercase or lowercase

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
          else
          {
                    printf("this is not character");
          }
          return 0;
}