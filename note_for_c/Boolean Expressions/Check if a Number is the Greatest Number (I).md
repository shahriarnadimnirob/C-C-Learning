Let's try to build the logic to check if a number `n1` is the greatest among three numbers, `n1`, `n2`, and `n3`.

If `n1` is the largest number, we will print `1` (true). If not, we will print `0` (false).

We know `n1` is the largest number if:

- `n1` is greater than `n2`
- and `n1` is greater than `n3`

![Building Logic: Check if greatest number (I)](https://cdn.programiz.pro/course-images/learn-c-programming/learn-c-2-3-4.png)

Figure: Building Logic: Check if greatest number (I)

Here's the code to check if the number is the greatest or not:

```c
#include <stdio.h>

int main() {

    int n1, n2, n3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int result;

    // Check if n1 is the greatest
    if (n1 > n2 && n1 > n3) {
        result = 1;
        printf("%d\n", result);  // 1
    } 

    else {
        result = 0;
        printf("%d", result);  // 0
    }

    return 0;
}
```


run the above program and see the output for different values of `n1`, `n2`, and `n3`.


# Find the Smallest Number

Create a program to find the smallest number.

- Take 3 integer inputs from the user and store them in `n1`, `n2` and `n3` variables.
- Print `1` if `n3` is the smallest among the three numbers.
- Print `0` if `n3` is not the smallest among the three numbers.

### Example

```
Test Input15
12
9
```

```
Expected Output1
```



```
#include <stdio.h>

int main() {
    int n1, n2, n3;
    int result;

    // Get input value for n1, n2, and n3
    scanf("%d %d %d", &n1, &n2, &n3);

    // Check if n3 is the smallest number
    if ((n3 < n2) && (n3 < n1)) {
        result = 1;
    } else {
        result = 0;
    }

    // Print 1 or 0 based on the condition
    printf("%d", result);

    return 0;
}
```