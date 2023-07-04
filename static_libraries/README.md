# C Static Libraries


## What is a static library?

A static library is an archive file containing object files that remain static until the program is recompiled. This static library can be used as a single entity in a linking phase of a program.
## Why do we use libraries?
Using a static library means only one object file needs to be pulled in during the linking phase. This speeds up the linking phase because there are fewer files to process. The benefit of using a static library is that the functions and other symbols loaded into it are indexed. For this reason, linking a program whose object files are ordered in libraries is faster than linking a program whose object files are separate on the disk.
## How to create them?
First of all, we include all function prototypes of .c files into the header file:

```python
#ifndef MAIN_H

#define MAIN_H

/* all function prototypes */

#endif
```
Then we compile .c files with `gcc -c` command. After this process, we will have .c files compiled into object files '.o' which are necessary for the library.

The next step now is to create an archive file(static library) with object files '.o' and for this step, we use the command below:
```
ar -rc libexample.a *.o
```
- ar is a UNIX command for creating and maintaining library archives

- -r is used to replace or add files to archive

- -c is used to create a new archive file

- libexample.a is the name of the file with the extension '.a' which stands for archive

- And the final step of the command is the selection of all object files

## How to use them?
After creating the library (archive file) we use it in a program.
```
gcc filename.c -L . -lexample -o filename
```
- gcc (GNU Compiler Collection) - command to compile C files

- filename - name of the file

- -L . - tell the linker that the libraries might be found in the current directory '.'

- -l - links the C file with the library file

- example - the name of the static library (check notes at the end of the article)

- -o is used to change the name of the executable file

- filename - name of the executable file
## Conclusion
This was a basic explanation of what is a static library, how to create and use them.
