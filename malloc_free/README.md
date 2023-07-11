# Malloc, Free

## Introduction
The *malloc* function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.

When the amount of memory is not needed anymore, you must return it to the operating system by calling the function *free*.

At the end of this project we learned about:
### Automatic allocation

When you declare variables or when you use strings within double quotes, the program is taking care of all the memory allocation. You do not have to think about it.
```
julien@ubuntu:~/c/malloc$ head -n 14 cisfun.c
/**
 * cisfun - function used for concept introduction
 * @n1: number of projects
 * @n2: number of tasks
 *
 * Return: nothing.
 */
void cisfun(unsigned int n1, unsigned int n2)
{
    int n;
    char c;
    int *ptr;
    char array[3];
}
julien@ubuntu:~/c/malloc$ 
```
In the above example, the arguments and the local variables are stored automatically in memory when the function is called. The program reserves space and uses it without you having to think about it.
By default, the memory used to store those variables can be read and written. When the program leaves the function, the memory used for all the above variables is released for future use.

### Dynamic allocation
#### Malloc
The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.

In this [exercise](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/malloc_free/0-create_array.c) we will write a function that creates an array of chars, and initializes it with a specific char.
* Prototype: char *create_array(unsigned int size, char c);
* Returns NULL if size = 0
* Returns a pointer to the array, or NULL if it fails

In the above example we use malloc to create allocated space in memory, and we fill this space with characters. Note the use the operator sizeof. It is very important because as you know, the size of the different types will be different on different machines. Always use sizeof for a better portability.

### Free
When you are using malloc, you have to handle the memory yourself. This means that:

* You need to keep track of all the addresses of the allocated memory (in a variable of type pointer)
* You have to deallocate every memory space you previously allocated yourself. If you do not do this, then your program can run out of memory. 
* Your operating system could even kill your program while it is running

The *free* function frees the memory space which have been allocated by a previous call to malloc. In this [example](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/malloc_free/4-free_grid.c) we are writing a function that frees a 2 dimensional grid previously created by our [alloc_grid](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/malloc_free/3-alloc_grid.c) function.
* Prototype: void free_grid(int **grid, int height)

The memory allocated by malloc is free‘d with a call to the function free.
You should always free all malloc'ed memory spaces.
