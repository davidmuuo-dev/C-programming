#include <stdio.h>

int main(void){
  //implicit type conversion.-it occurs automatically
  int number = 10;
  double result;
  result = number; /*assigning number(10) to result which is a double thus convering 10 from int to double.*/


  int age = 20;
  double exactAge ;
  exactAge = age;
  printf("%.2f\n",exactAge);
  printf("%.1f\n",result);

  //Explicit type conversion-convert a value to another datatype.
  int a = 10;
  int b =3;
  float newResult = (float) a/b;
  printf("%.2f\n",newResult);

  //EXAMPLE——CALCULATING STUDENT AVERAGE
  int cat1,cat2,exam;
  float average;
  printf("Cat1 marks:  ");
  scanf("%d",&cat1);
  printf("Cat2 marks:  ");
  scanf("%d",&cat2);
  printf("Exam marks:  ");
  scanf("%d",&exam);
  average = (float) (cat1+cat2+exam)/3;
  printf("The Average mark is: %.2f\n",average);
  return 0;
}
