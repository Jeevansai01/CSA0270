#include<stdio.h>
int main(){
   char ch;
   printf("enter a character:");
   scanf("%c",&ch);
   if(ch >= 65 && ch <= 90)
      printf("Upper Case Letter");
   else if(ch >= 97 && ch <= 122)
      printf("Lower Case letter");
   else if(ch >= 48 && ch <= 57)
      printf("Number");
   else
      printf("Symbol");
   return 0;
}
