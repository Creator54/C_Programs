//Basic Arithmetic Operations using C//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
  int num1, num2, cal;
  int oprtr;
   printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Modulus \n6.power \n7.Exit\n");
  while(1)
  {
     printf("Choose your operation : ");
     scanf("%d", &oprtr);
    switch(oprtr)
    {
     case 1 :   printf("Enter your first number : ");
                scanf("%d", &num1);
                printf("Enter your second number : ");
                scanf("%d", &num2);
                cal = num1 + num2;
                printf("Sum is %d\n", cal);
                break;
    case 2 :    printf("Enter your first number : ");
                scanf("%d", &num1);
                printf("Enter your second number : ");
                scanf("%d", &num2);
                cal = num1 - num2;
                printf("Difference is %d\n", cal);
                break;
    case 3 :    printf("Enter your first number : ");
                scanf("%d", &num1);
                printf("Enter your second number : ");
                scanf("%d", &num2);
                cal = num1 * num2;
                printf("Product is %d\n", cal);
                break;
    case 4 :    printf("Enter your dividend : ");
                scanf("%d", &num1);
                printf("Enter your divisor : ");
                scanf("%d", &num2);
                cal = num1 / num2;
                printf("Quotient is %d\n", cal);
                break;
    case 5  :   printf("Enter your dividend : ");
                scanf("%d", &num1);
                printf("Enter your divisor : ");
                scanf("%d", &num2);
                cal = num1 % num2;
                printf("Remainder is %d\n", cal);
                break;
    case 6 :    printf("Enter base : ");
                scanf("%d", &num1);
                printf("Enter power : ");
                scanf("%d", &num2);
                cal = pow(num1, num2);
                printf("Result is %d\n", cal);
                break;
    case 7 : exit(0);
    default : printf("Entered choice is not correct.\n");
              break;
    }
  }  
}
