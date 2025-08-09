```c
#include <stdio.h>

int main() {

  // Initial value of total is 0
  double total = 0;
  double num;

  // The condition of the loop is always true
  // The only way to end this loop is using break
  while (1) {

    // Take input value for num again
    printf("Enter a number: ");
    scanf(" %lf", &num);

    // If user enters 0, end the loop
    if (num == 0) {
      break;
    }

    // Add the value of num to total
    total = total + num;
  }
  
  printf("Result: %.2lf", total);

  return 0;
}

```

# The output of both the programs will be the same.

```sh
Enter a number: 7.8
Enter a number: 4.9
Enter a number: -3.6
Enter a number: 5.2
Enter a number: 0
Result: 14.30
```

Here, the condition of the loop is always **1** (true). The only way to terminate this loop is by using a `break`.

If the user enters **0**, the loop ends because of this condition.

```c
if (num == 0) {
  break;
}
```

However, if the user enters any other number, it is added to the `total` variable. And, the total is printed from outside of the loop.


