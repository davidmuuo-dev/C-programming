#include <stdio.h>
int main(){
  int age;
  float gpa;
  char grade;
  char name[50];

  printf("Enter your age: ");
  scanf("%d",&age);

  printf("Enter your gpa: ");
  scanf("%f",&gpa);

  printf("Enter your grade: ");
  scanf("%s",&grade);

  
  printf("Enter your name: ");
  fgets(name, sizeof(name),stdin);
  //scanf("%s",&name);
  
  printf("%d\n",age);
  printf("%f\n",gpa);
  printf("%c\n",grade);
  printf("%s\n",name);
  return 0;
}