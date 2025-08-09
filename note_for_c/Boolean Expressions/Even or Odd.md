We'll find the remainder of a number when divided by **2** using `%`:

```c
// Remainder when divided by 2
number % 2
```

Then, check if this value (remainder) is equal to **0**. If it's equal to **0**, the number is even:

```c
// Code to compare remainder with 0
number % 2 == 0
```

![Example: Even or Odd (II)](https://cdn.programiz.pro/course-images/learn-c-programming/learn-c-2-1-5.png)

Figure: Example: Even or Odd (II)


# Example: Even or Odd (III)

Here's the complete code to check if a number is even or odd:

```c
#include <stdio.h>

int main() {

    int number;

    // Get number from user
    printf("Enter a number: ");
    scanf("%d", &number);

     // Print 1 if number is even and 0 if odd
    printf("%d", number % 2 == 0);
  
    return 0;
}
```

**Output 1**

```
Enter a number: 12
1
```

**Output 2**

```
Enter a number: 13
0
```

Here, the `number % 2 == 0` expression first computes `number % 2` (remainder, when `number` is divided by **2**). If equal to **0** (even number), the comparison results in `1` (true), else it's `0` (false).


# Example: Even or Odd (IV)

In programming, there's often more than one way to solve the same problem. Let's look into another way of solving this problem.

When an integer is divided by **2**, the remainder is always **0** or **1**.

This means `number % 2 == 0` is equivalent to `number % 2 != 1`.

![Example: Even or Odd (IV)](https://cdn.programiz.pro/course-images/learn-c-programming/learn-c-2-1-6.png)

Figure: Example: Even or Odd (IV)

Both achieve the same result using slightly different approaches



```c
#include <stdio.h>

int main() {

  int number;

  // Get number from user
  printf("Enter a number: ");
  scanf("%d", &number);

  // Replace == 0 with !=1
  printf("%d", number % 2 != 1);
  
  return 0;
}
```

If `number` is even, `1` (true) is printed. And if `number` is odd, `0` (false) is printed.