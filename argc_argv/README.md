# Argc , Argv

In this project we are learning how to use arguments passed to your program. For this we are using *argc* and *argv* which are:

* argc stands for "argument count" and is an integer that represents the number of command-line arguments provided to the program.
* argv stands for "argument vector" and is an array of strings that holds the actual command-line arguments passed to the program.

When you run a program from the command line, you can provide additional information or parameters to the program. These parameters are called command-line arguments. For example, consider the following command:
```
$ myprogram argument1 argument2
```
In this case, myprogram is the name of the executable, and argument1 and argument2 are the command-line arguments.

The argc variable will have a value of 3 (the program name counts as an argument), and argv will be an array with three elements:
```
argv[0] -> "myprogram"
argv[1] -> "argument1"
argv[2] -> "argument2"
```
By using *argc* and *argv*, you can access and process these command-line arguments within your program. This can be useful for various purposes, such as customizing the program's behavior, providing input filenames, specifying configuration options, and more.

### General requirements for this project are:

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file
* You are allowed to use the standard library

We learned how to write a program with the use of arguments.

For example the most basic task it would be:

Write a [program](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/argc_argv/0-whatsmyname.c) that prints its name, followed by a new line.
When you compile and run this program, it will print the name of the executable itself, which is stored in argv[0].

To undersand more about argc and argv we see them in more complex usage.
For example write a [program](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/argc_argv/4-add.c) that adds positive numbers.
* Print the result, followed by a new line
* If no number is passed to the program, print 0, followed by a new line
* If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
* You can assume that numbers and the addition of all the numbers can be stored in an int

Here's how this program works:
* If argc is 0 (no numbers provided), it prints "0"
* For each argument (argv[i]) starting from index 1:
* It checks if the argument contains any non-digit characters using the isdigit() function.
* If a non-digit character is found, it prints "Error" and returns 1.
* If the argument is a valid positive number, adds it to the sum variable.
* Finally, it prints the sum and returns 0.

## Conclusion

*Argc* and *argv* provide a flexible way to pass information to a program from the command line, enabling you to make your programs more versatile and interactive. They are particularly useful when you need to work with external inputs or when you want to provide options or parameters to your program without recompiling it each time.

Understanding how to use *argc* and *argv* effectively allows you to build command-line applications that can handle different scenarios and user input, making your programs more robust and adaptable.
