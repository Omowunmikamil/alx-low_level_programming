			# 0x04. C - More functions, more nested loops #

/Focus  - What are nested loops and how to use them.
	- What is a function and how do you use functions.
	- What is the difference between a declaration and a definition of a function.
	- What is a prototype.
	- Scope of variables.
	- What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89.
	- What are header files and how to to use them with #include.


- The inner loop is nested inside the outer loop. Nested loops are useful when for each pass through the outer loop, you need to repeat some action on the data in the outer loop.

- Functions are "self contained" modules of code that accomplish a specific task. Functions usually "take in" data, process it, and "return" a result. Once a function is written, it can be used over and over and over again. Functions can be "called" from the inside of other functions.

- Declaration: the function's name, return type, and parameters (if any) 
  - Definition: the body of the function (code to be executed).

- A function prototype is simply the declaration of a function that specifies function's name, parameters and return type. It doesn't contain function body. A function prototype gives information to the compiler that the function may later be used in the program.

- Scope of a variable is its lifetime in the program. This means that the scope of a variable is the block of code in the entire program where the variable is declared, used, and can be modified.

- Compiler flags are options you give to gcc when it compiles a file or set of files. You may provide these directly on the command line, or your development tools may generate them when they invoke gcc. This section describes just the flags that are specific to Objective-C.

- A header file is a file with extension .h which contains C function declarations and macro definitions to be shared between several source files. There are two types of header files: the files that the programmer writes and the files that comes with your compiler.


			# Tools and Requirements #

- Allowed editors: vi, vim, emacs.

- Compiler: Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.

- A README.md file, at the root of the folder of the project is mandatory.

- Code style with Betty:  It will be checked using betty-style.pl and betty-doc.pl.

- Prototype: All protptype functions should be included in your header file called main.h.

- Don’t forget to push your header file.


/* Filename | Description
----------- | -----------

- 0-isupper.c | Write a function that checks for uppercase character.

- 1-isdigit.c | Write a function that checks for a digit (0 through 9).

- 2-mul.c | Write a function that multiplies two integers.

- 3-print_numbers.c | Write a function that prints the numbers, from 0 to 9.

- 4-print_most_numbers.c | Write a function that prints the numbers, from 0 to 9, do not print 2 and 4.

- 5-more_numbers.c | Write a function that prints 10 times the numbers, from 0 to 14.

- 6-print_line.c | Write a function that draws a straight line in the terminal.

- 7-print_diagonal.c | Write a function that draws a diagonal line on the terminal.

- 8-print_square.c | Write a function that prints a square, followed by a new line.

- 9-fizz_buzz.c | The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

- 10-print_triangle.c | Write a function that prints a triangle, followed by a new line.

/* Advance tasks

- 100-prime_factor.c | The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.

- 101-print_number.c | Write a function that prints an integer.



/* Functions to be decleared as Prototypes |
--------------------------------------------
- int _putchar(char c);

- int _isupper(int c);

- int _isdigit(int c);

- int mul(int a, int b);

- void print_numbers(void);

- void print_most_numbers(void);

- void more_numbers(void);

- void print_line(int n);

- void print_diagonal(int n);

- void print_square(int size);

- void print_triangle(int size);

- void print_number(int n);

End...
