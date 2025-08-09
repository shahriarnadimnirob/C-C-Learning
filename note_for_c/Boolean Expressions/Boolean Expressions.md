Computers also evaluate conditions to determine whether they are **true** or **false**. In **C**, however, these are represented as **integers**:

1. **0** represents **false**.
2. Any **non-zero integer** represents **true** (typically 1).

These conditions are called **Boolean expressions**.

Let's understand this with an example.


```c
#include <stdio.h>

int main() {

    double total;
    int result;

    printf("Enter total: ");
    scanf("%lf", &total);
  
    // Check if total is greater than 100
    result = total > 100;

    printf("Result: %d", result);

    return 0;
}
```

The output value `result` will be either **0** or **1**, depending on the input `total` provided.

Let's run this program with two different input values:

**Sample Output 1**

```
Enter total: 70
Result: 0
```

**Sample Output 2**

```
Enter total: 150
Result: 1
```



![Greater Than Comparator](https://cdn.programiz.pro/course-images/learn-c-programming/learn-c-2-1-2.png)

Figure: Greater Than Comparator