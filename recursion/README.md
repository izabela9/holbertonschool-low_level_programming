# Recursion

## What is it?
Recursion is a method where the solution to a problem depends on solutions to smaller instances of the same problem.
A recursive function is a function that calls itself. Recursion is the process of repeating items in a self-similar way. In programming languages, if a program allows you to call a function inside the same function, then it is called a recursive call of the function.
```
void recursion() {
   recursion(); /* function calls itself */
}

int main() {
   recursion();
}
```
The C programming language supports recursion, i.e., a function to call itself. But while using recursion, programmers need to be careful to define an exit condition from the function, otherwise it will go into an infinite loop.

Recursive functions are very useful to solve many mathematical problems, such as calculating the factorial of a number, generating Fibonacci series, etc.

[Number Factorial](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/recursion/3-factorial.c)

The following example calculates the factorial of a given number using a recursive function:
```
#include <stdio.h>

unsigned long long int factorial(unsigned int i) {

   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}

int  main() {
   int i = 12;
   printf("Factorial of %d is %d\n", i, factorial(i));
   return 0;
}
```
When the above code is compiled and executed, it produces the following result :
```
Factorial of 12 is 479001600
```

## Conclusion
Recursion in C is a powerful programming technique where a function calls itself to solve a problem by breaking it down into smaller, simpler subproblems. It allows for elegant and concise solutions to certain types of problems. Recursion provides an elegant solution to certain problems and can simplify code. It can make complex problems more understandable by breaking them down into smaller parts. However, recursion can be less efficient than iterative approaches due to the overhead of function calls and stack operations. Additionally, incorrect termination conditions or excessive recursion can lead to infinite loops or stack overflow errors.
