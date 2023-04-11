# include<stdio.h>
 int main()
 {
     int num;
     printf("enter the number:");
     scanf("%d",&num);
     if (num>0)
     {
         printf("the number is positive:");
     }
     else if (num<0)
      {
          printf("the number is negative:");
      }
      else
      {
          printf("the number is zero : ");
      }
      return 0;
 }