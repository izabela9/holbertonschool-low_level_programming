# Pointers, arrays & strings

In this project we are learning about pointers, arrays and strings, how to use them and why should we use them in programming.

## Pointers

Some C programming tasks are performed more easily with pointers, and other tasks, such as dynamic memory allocation, cannot be performed without using pointers. So it becomes necessary to learn pointers to become a perfect C programmer. Let's start learning them in simple and easy steps.

As you know, every variable is a memory location and every memory location has its address defined which can be accessed using ampersand (&) operator, which denotes an address in memory. Consider the following example, which prints the address of the variables defined :
```
#include <stdio.h>

int main () {

   int  var1;
   char var2[10];

   printf("Address of var1 variable: %x\n", &var1  );
   printf("Address of var2 variable: %x\n", &var2  );

   return 0;
}
```
When the above code is compiled and executed, it produces the following result :
```
Address of var1 variable: bff5a400
Address of var2 variable: bff5a3f6
```
## What are pointers?
A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location. Like any variable or constant, you must declare a pointer before using it to store any variable address. The general form of a pointer variable declaration is  :
```
type *var-name;
```
Here, type is the pointer's base type; it must be a valid C data type and var-name is the name of the pointer variable. The asterisk * used to declare a pointer is the same asterisk used for multiplication. However, in this statement the asterisk is being used to designate a variable as a pointer. Take a look at some of the valid pointer declarations :
```
int    *ip;    /* pointer to an integer */
double *dp;    /* pointer to a double */
float  *fp;    /* pointer to a float */
char   *ch     /* pointer to a character */
```
The actual data type of the value of all pointers, whether integer, float, character, or otherwise, is the same, a long hexadecimal number that represents a memory address. The only difference between pointers of different data types is the data type of the variable or constant that the pointer points to.
## How to Use Pointers?
There are a few important operations, which we will do with the help of pointers very frequently. (a) We define a pointer variable, (b) assign the address of a variable to a pointer and (c) finally access the value at the address available in the pointer variable. This is done by using unary operator * that returns the value of the variable located at the address specified by its operand. For example if we want to change the value of a parameter by using a pointer we would simply make [this code](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/0-reset_to_98.c).

## Arrays
Arrays a kind of data structure that can store a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.

Instead of declaring individual variables, such as number0, number1, ..., and number99, you declare one array variable such as numbers and use numbers[0], numbers[1], and ..., numbers[99] to represent individual variables. A specific element in an array is accessed by an index.

## Declaring Arrays
```
type arrayName [ arraySize ];
```
This is called a single-dimensional array. The arraySize must be an integer constant greater than zero and type can be any valid C data type. For example, to declare a 10-element array called balance of type double, use this statement :
```
double balance[10];
```
Here balance is a variable array which is sufficient to hold up to 10 double numbers.

## Initializing Arrays
You can initialize an array in C either one by one or using a single statement as follows :
```
double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
```
The number of values between braces { } cannot be larger than the number of elements that we declare for the array between square brackets [ ].

If you omit the size of the array, an array just big enough to hold the initialization is created. Therefore, if you write :
```
double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
```
## Accessing Array Elements
An element is accessed by indexing the array name. This is done by placing the index of the element within square brackets after the name of the array. For example :
```
double salary = balance[9];
```
The above statement will take the 10th element from the array and assign the value to salary variable.

Here we have an [example](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/8-print_array.c) on how to print n elements in an array to have a better view on how to implement our knowledge in arrays in programming.

## Strings
Strings are actually one-dimensional array of characters terminated by a null character '\0'. 
```
char greeting[] = "Hello";
```
The C compiler automatically places the '\0' at the end of the string when it initializes the array. 
C supports a wide range of functions that manipulate null-terminated strings:

* strcpy(s1, s2);

Copies string s2 into string s1. 
* strcat(s1, s2);

Concatenates string s2 onto the end of string s1.
* strlen(s1);

Returns the length of string s1.

In strings we can do various manipulation of data like [copying a string](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/2-strncpy.c).

The function takes three arguments: dest, a pointer to the destination string, src, a pointer to the source string, and n, the maximum number of characters to be copied.

A loop is initialized, starting from 0 and continuing until either n characters have been copied or the end of the source string ('\0') is reached.

Within the loop, each character from the source string is copied to the corresponding position in the destination string using the index i.
After the loop, another loop is used to fill any remaining positions in the destination string with null characters ('\0') to ensure the string is properly terminated.

The function returns a pointer to the destination string.

