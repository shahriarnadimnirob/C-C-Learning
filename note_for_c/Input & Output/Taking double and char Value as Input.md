```
#include <stdio.h>

  

int main() {

    char alphabet;

    double salary;

    printf("Enter a character: ");


    // Store character input in alphabet

    scanf("%c", &alphabet);


    printf("Enter your salary: ");
    

    // Store double input in salary

    scanf("%lf", &salary);

    printf("\nCharacter Input: %c", alphabet);

    printf("\nSalary Input: %.2lf", salary);

  
    return 0;

}
```


**Sample Output 1**

```
Enter a character: z
Enter your salary: 8734.23

Character Input: z
Salary Input: 8734.23
```



**Sample Output 2**

```
Enter a character: p
Enter your salary: 4361.56

Character Input: p
Salary Input: 4361.56
