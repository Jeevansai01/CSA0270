# include<stdio.h>
 int main()
 {
     int num;
     /* input number from user */
     printf("enter any number:");
     scanf("%d",&num);
     /*
     if number module of divison 5 is 0
     and then number module of divion 11 is 0
     if mumber module is divisible by 5 and 11 both
     */
     if ((num%5==0)&&(num%11==0))
     {
         printf("the number is divisible by both 5 and 11:");
     }
     else
       {
           printf("the number is not divisible by both 5 and 11: ");
       }
       return 0;
 }