#include <stdio.h> /*This is a preprocessor directive that tell the compiler to include the standard input/output*/
#include <stdbool.h>

int main() {
  printf("I HAVE FRIENDS \n");
  printf("I always the best!\n");

  //Variables
  /*Variables are declared by stating their datatypes then variable name then = variable values*/

  //integers
  int age = 17;
  printf("I am %d years old age\n",age);
  int year = 2026;
  printf("The year is %d\n",year);

  //Decimal numbers
  float gpa = 2.34;
  printf("Your GPA = %.3f\n",gpa);
  float price = 99.99;
  printf("This shirt costs $%.3f\n",price);

  //More precise decimal numbers
  double pi = 3.42123456435757;
  printf("The value of pi is %.15lf\n",pi);

  //character
  char grade = 'A';
  printf("Your mean grade is %c\n",grade);

  //String => MORE CHARACTERS.
  char name[] = "DavidMuuo";
  printf("Hello %s\n",name);

  //Booleans
  bool isOnline = true;
  bool isFat = false;
  printf("%d\n",isOnline);
  printf("%d\n",isFat);


  //OPTIONAL MODIFIERS
  int num1 = 23;
  int num2 = 2;
  printf("%4d\n",num1);
  printf("%4d\n",num2);
  
  printf("%-4d\n",num1);
  printf("%-4d\n",num2);
  
  printf("%04d\n",num1);
  printf("%04d\n",num2);
  
  printf("%+4d\n",num1);
  printf("%+4d\n",num2);
  

  float price1 = 99.9934;
  float price2 = 34.34;
  printf("%.1f\n",price1);
  printf("%.5f\n",price2);
  return 0;
}


