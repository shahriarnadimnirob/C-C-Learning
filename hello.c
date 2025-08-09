#include <stdio.h>

  

int main() {

  
char alphabet;

 double salary;
 printf("Enter input values (char and double): ");

  

    // Take character and double input together

 scanf("%c %lf", &alphabet, &salary);
 printf("Character Input: %c", alphabet);

 printf("\nSalary Input: %.2lf", salary);

  

 return 0;

}

