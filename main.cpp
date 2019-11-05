#include<iostream>
using namespace std;

// main method
int main()
{
   int select;
   long firstNum, secondNum, result;

   //For different options
   cout<<" This is a simple calculator software that performs basic arithmetic operations!!!.\n";
   cout << "Please choose your option from below perform desired calculation:"
           "\n1 = Addition"
           "\n2 = Subtraction"
           "\n3 = Multiplication"
           "\n4 = Division"
           "\n5 = Squares"
           "\n6 = Exit"
           "\n\nChoice: ";
   cin >> select;

   //Here while loop checks whether the choice is in the given range
   while(select < 1 || select > 6)
   {
      cout << "\nPlease choose the above mentioned option."
              "\nChoice: ";
      cin >> select;
   }

   switch (select)
   {
      //First case for  Addition calculation
      case 1:
         cout << "Enter two numbers: \n";
         cin >> firstNum >> secondNum;
         result = firstNum + secondNum;
         cout << "The Sum of Two Numbers = " << result;
         break;

      //Case for Subtraction calculation
      case 2:
         cout << "Enter two numbers: \n";
         cin >> firstNum >> secondNum;
         result = firstNum - secondNum;
         cout << "Subtraction = " << result;
         break;

      //Case for Multiplication calculation
      case 3:
         cout << "Please Enter two numbers: \n";
         cin >> firstNum >> secondNum;
         result = firstNum * secondNum;
         cout << "Product = " << result;
         break;

      //Case for Division calculation
      case 4:
         cout << "Enter Dividend: ";
         cin >> firstNum;
         cout << "Enter Divisor: ";
         cin >> secondNum;

         //while loop checks for divisor whether it is zero or not
         while(secondNum == 0)
         {
            cout << "\nDivisor cannot be zero."
                    "\nEnter divisor once again: ";
            cin >> secondNum;
         }
         result = firstNum / secondNum;
         cout << "\nQuotient = " << result;
         break;

      //Case for Square calculation
      case 5:
         cout << "Enter any number: \n";
         cin >> firstNum;
         result = firstNum * firstNum;
         cout << "Square = " << result;
         break;

      case 6:
         return 0;

      default: cout << "\nError";
   }
}
