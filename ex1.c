/******************
Name:Aviad Konig
ID:333602043
Assignment:ex1
*******************/
#include <stdio.h>

// REMINDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int num, pos;
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &pos);
  int bit=(num>>pos)&0x1;
  printf("The bit in position %d of number %d is: %d\n", pos , num , bit);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &pos);
  bit=(num>>pos)&0x1;
  int bit1=num-(bit<<pos);
  int bit2=bit1+(1<<pos);
  printf("Number with bit %d set to 1: %d\n", pos , bit2);
  printf("Number with bit %d set to 0: %d\n", pos , bit1);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &pos);
  bit=(num>>pos)&0x1;
  bit1=num-(bit<<pos)+((!bit)<<pos);
  printf("Number with bit %d toggled: %d\n", pos , bit1);
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf("%d", &num);
  num=!(num&0x1);
  printf("%d\n", num);
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int num1, num2;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &num1);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &num2);
  printf("The sum in hexadecimal: %X\n",num1+num2);
  int bit3=(num1+num2>>3)&0x1, bit5=(num1+num2>>5)&0x1, bit7=(num1+num2>>7)&0x1, bit11=(num1+num2>>11)&0x1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", bit3, bit5, bit7, bit11);
  printf("Bye!\n");
  
  return 0;
}
