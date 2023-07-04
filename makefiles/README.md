# Makefile
## What is makefile?
Makefile sets a set of rules to determine which parts of a program need to be recompile, and issues command to recompile them.
Makefile is a way of automating software building procedure and other complex tasks with dependencies.
Makefile contains: dependency rules, macros and suffix(or implicit) rules.

## Makefile Syntax
A Makefile consists of a set of rules. A rule generally looks like this:
```
targets: prerequisites
	command
	command
	command
```
* The targets are file names, separated by spaces. Typically, there is only one per rule.
* The commands are a series of steps typically used to make the target(s). These need to start with a tab character, not spaces.
* The prerequisites are also file names, separated by spaces. These files need to exist before the commands for the target are run. These are also called dependencies

## When, why and how to use Makefiles?
Makefiles are commonly used build automation tools in software development projects. They are primarily used to manage and streamline the compilation, linking, and other build processes involved in building a software project.

Using Makefiles offers several benefits:

* Build Automation: Makefiles automate the build process, eliminating the need to remember and execute lengthy compilation and linking commands manually. It saves time and reduces human error.
* Efficient Compilation: Makefiles track file dependencies and only recompile the necessary files when changes are detected. This helps reduce build times, especially in large projects.
* Dependency Management: Makefiles allow you to define and manage dependencies between source files and libraries, ensuring that files are compiled in the correct order and linked properly.
* Portability: Makefiles provide a platform-independent way of defining build processes, making it easier to maintain and distribute projects across different platforms.

[Creating out first makefile](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/makefiles/0-Makefile) with basic requirements. 
In this Makefile, there is a single target named "all". The target "all" is usually used as the default target that gets executed when you run make without specifying a target explicitly.

The command associated with the target "all" is gcc main.c school.c -o school. This command uses the gcc compiler to compile main.c and school.c source files and generates an executable named "school" with the -o flag.

To use this Makefile follow these steps:

1. Create a file named "Makefile" (or "makefile") in the same directory as your source files.
2. Copy and paste the provided Makefile code into the "Makefile" file.
3. Open a terminal and navigate to the directory containing the Makefile.
4. Run the make command in the terminal.

When you run make, it will execute the commands associated with the "all" target in the Makefile. In this case, it will compile the main.c and school.c files using gcc and generate an executable named "school".
