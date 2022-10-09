#include<stdio.h>
int main()
{
   int A;
   int B;
   char operation;
   int result;

   printf("Enter the first number:");
   scanf("%d",&A);

   printf("Enter the secoend number:");
   scanf("%d",&B);
   
   printf("Enter the operation:");
   scanf(" %c",&operation);

   switch(operation)
   {
      case '+':
       result=A+B;         
      break;
      case '-':
       result=A-B;   
      break;
      case '*':
       result=A*B;      
      break;
      case '/':
       result=A/B;       
      break;
      default:printf("No result");
   }
   printf("So Your Result Is Here:");
   printf("%d",result);
   return 0;
}
