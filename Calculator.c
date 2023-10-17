#include <stdio.h>

int main() {

  char op;
  float first, second;
  

  printf("Enter an operation as a symbol(+;addition, -;substracion, *;multiplication, /;division): ");
  scanf("%c", &op);

  printf("Enter the first number: ");
  scanf("%f", &first);
  
  printf("Enter the second number: ");
  scanf("%f", &second);


  if (op == '+') {
    printf("Result: %.2f + %.2f = %.2f", first, second, (first + second));
  }


  else if (op == '-') { 
    printf("Result: %.2f - %.2f = %.2f", first, second, (first - second));
  }

  else if (op == '*') {
    printf("Result: %.2f * %.2f = %.2f", first, second, (first * second));
  }

  else if (op == '/') {
    printf("Result: %.2f / %.2f = %.2f", first, second, (first / second));
  }

  
  return 0;

}