```
#include <stdio.h>

int main() {

    // Create a variable

    int age;


    // Store user input in the variable

    scanf("%d", &age);


    // Print the variable

    printf("Age is %d", age);

  

    return 0;

}
```
```
##output
program w8 for the user to input the age 
thn prints the age is ___ 
```


The `scanf()` function has two parts:

- `%d` - format specifier that represents the type of input data
- `&age` - represents the memory location of the `age` variable

Here, the `scanf()` function takes `int` input (specified by `%d`) from the user and stores it in the `age` variable.

![Idea Emoji](data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABgAAAAZCAYAAAArK+5dAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAAXNSR0IArs4c6QAAAARnQU1BAACxjwv8YQUAAAOQSURBVHgBtZbPb9xEFMffzNjx/sruJoqSJUpJS0EiFFWkgOCENuIAhx75H7jAASQqFFXCXLgBFUhccuDEBS5ISESgoAABVSBUipoEKoSESts03Xh3vd61PWPPDG+8bcQhjRdon/Q0s09+34/fPD97Ae6xkbwL9OcvO+1G4bTF7GcVWCcppQxAXtAqXe+0o7VjS+e6/xnQvXTmCYuWPmClyUWwaxbQAmZgioxAp32pQu9iEvuvTpx6+9t/DQgunVmg9vgqqx6fJ84MEFoFAzD6WsUI6ILiN0EOruwmg+D5icW3Lh6kQw8Kaq0JsOJ79sTD86z8ELDCUWCleQwdQcb9uB7F9TjGHgBWfXDGLhRXNjfdsZEB7Z+Xn7bL00ukMAfUnkKvYQVlIKwIFJ1YVaAOxp37gDmzQMuNx+fStDkyYMwZO02LDUasOoqW8CAdBFh4PNhfdEJwTzHGEGRPYkXT+NN+Ias8D6C10bJPEnPXBKumFNfbl+l/OGohCExFrIJb58TWJ2/a+RV87TJKrdK+oNECNXQ9XPWt34Sg76/gnFiczK8AvgGltboM+KSATtAlVpVme63QJcaUwD1HF0OX3JR+Ha62ZS6AuK7Sif5McQ+UHKDH+0KgDTREQIQrzoIMQaU95HVA8ORjsuSm+RWglR6ZWksj7xctWvi891AoGt6xFpkrMwdJmM2CFnuQhu1fU6I+PUjrQAAhLyY8CF9KB1d8nXoo5Gd3ayZ46AOMdRDSwmKuRZBEr0w/6vZHBhibfOzsdzLunZXRX9iCdlaJksNj0UmQASTfwVZ136ksvP7FnXTuCDBWqcGHMmr9JHkHVCaKkAT7kvRBCnP2/lank7x7mMahANJ4bYDde18nCOA+eoCiQQbQAiE8/GjuqWXvMA0LcoyL9IKNwjhIOIFiOBqm2WkAIuFrefm5gMixbnBf9MbKcZXQJHv94rcA4n4omWN7efk074K5hWXv+8vjfmidgrTwJNBaE2D8GdjamaE//jab/m9AVgVXu9eu70G7G4IfBHB15wb4A/HHFBRbebm5R2QsjqW329qDMI5hol6HHkIs5sCX29v8rgDAFBELkKpvmg6JEBBGnLmuq+8KYM/zV0IumvVatd7udCCKIlmtVFbg1rv2MGMwgn21vv77eLXy5/nzPzy3ub0lbra8NxqzR86trq7KvNzcvy23rdlsWkqpY/jVsjc2NrZHzfsbqqLpy8q8XzcAAAAASUVORK5CYII=)

**Note**: To take `float`, `double`, and `char` inputs, we use the format specifiers `%f`, `%lf`, and `%c`, respectively.