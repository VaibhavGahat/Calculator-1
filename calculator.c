#include<stdio.h>
int main()
{
   int num1;
   int num2;
   char operation;
   int result;

   printf("Enter the first number:");
   scanf("%d",&num1);

   printf("Enter the secoend number:");
   scanf("%d",&num2);
   
   printf("Enter the operation:");
   scanf(" %c",&operation);

   switch(operation)
   {
      case '+':
       result=num1+num2;         
      break;
      case '-':
       result=num1-num2;   
      break;
      case '*':
       result=num1*num2;      
      break;
      case '/':
       result=num1/num2;       
      break;
      default:printf("No result");
   }
   printf("So Your Result Is Here:");
   printf("%d",result);
   return 0;
}
