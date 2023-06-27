## C, Hello World

**What is C?**

C is an imperative (procedural) language. 

All the code has to be inside a function. 

C files are source code of your program.


You have to compile C files with a compiler (for instance gcc) to create an executable file.

**Comments**

Begins with /* and ends with */

Can be inserted anywhere a white-space character is allowed
Comments don’t nest

Use comments to document your code

```python
/* comment */

/*
* comment
*/

/*
comment
*/

```
**Variables**

char - 1 byte
unsigned char - 1 byte
short - 2 bytes
unsigned short - 2 bytes
int - 4 bytes
unsigned int - 4 bytes
long - 8 bytes
unsigned long - 8 bytes

**Declaration of variables**

Variables always have a type. Syntax:
```
type var_name;
```
**C Program Compilation Process**

1. Preprocessor

In this stage, the preprocessor scans the source code and performs tasks such as including header files (#include), macro expansion, and conditional compilation (#ifdef, #ifndef, #endif). The preprocessor directives start with a hash symbol (#).

2. Compiler

The compiler takes the preprocessed source code and translates it into assembly language or an intermediate representation called object code. During compilation, syntax and semantic analysis are performed, and any errors or warnings are generated.

3. Assembler

If the compiler generates assembly language code, this step converts the assembly code into machine code or object code. The assembler translates the human-readable assembly instructions into binary instructions that the computer's processor can understand.

4. Linker

If the program consists of multiple source files or uses external libraries, linking is required. The linker combines the object code files generated in the previous steps, resolves references to external symbols (variables or functions), and creates a single executable file. It also performs additional tasks like memory layout and address resolution.

Understanding the compilation process is essential for troubleshooting errors, optimizing code, and gaining a deeper understanding of how your C programs are transformed into executable binaries.



## printf, puts, putchar

These three commands are used to print text.

**printf():**

* printf() is a widely used function for formatted output in C. It allows you to display text and variable values in a formatted manner on the console or other output devices.
* It belongs to the <stdio.h> library and has the following syntax: 
```
int printf(const char* format, ...);
```
* The first argument, format, is a string that specifies the desired output format. It can include format specifiers (such as %d, %f, %s, etc.) that are replaced with the corresponding values of the subsequent arguments.
* The return value of printf() is the total number of characters printed, excluding the null-terminating character.

**puts():**

* puts() is a function used for outputting a string to the console. It automatically appends a newline character (\n) at the end of the string.
* It belongs to the <stdio.h> library and has the following syntax:
``` 
int puts(const char* str);
```

* The argument, str, is a null-terminated string to be displayed.
* The return value of puts() is a non-negative integer if successful, or EOF (defined in <stdio.h>) if an error occurs.

**putchar():**

* putchar() is a function used to output a single character to the console or other output devices.

* It belongs to the <stdio.h> library and has the following syntax:
```
int putchar(int c);
```
* The argument, c, represents the character to be displayed. It can be specified as an ASCII value or a character literal enclosed in single quotes (e.g., 'A').
* The return value of putchar() is the character written as an unsigned char cast to an int. It returns EOF if an error occurs.

These functions are commonly used for printing text to the console or generating formatted output in C programs. They provide essential tools for displaying information and interacting with the user.
