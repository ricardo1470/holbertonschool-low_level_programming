> # 0x0F. C - Function pointers
---
### [0. What's my name](./0-print_name.c)
function that prints a name.
### [1. If you spend too much time thinking about a thing, you'll never get it done](./1-array_iterator.c)
function that executes a function given as a parameter on each element of an array.
### [2. To hell with circumstances; I create opportunities](./2-int_index.c)
function that searches for an integer.
### [3. A goal is not always meant to be reached, it often serves simply as something to aim at]()
* program that performs simple operations.
* You are allowed to use the standard library
* Usage: calc num1 operator num2
* You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
* > operator is one of the following:
  * ```+```: addition
  * ```-```: subtraction
  * ```*```: multiplication
  * ```/```: division
  * ```%```: modulo
* The program prints the result of the operation, followed by a new line
* You can assume that the result of all operations can be stored in an int
* if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
* if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
* if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
* This task requires that you create four different files.

### [3-calc.h](./3-calc.h)

* This file should contain all the function prototypes and data structures used by the program.

### [3-op_functions.c](./3-get_op_func.c)

This file should contain the 5 following functions (not more):

* ```op_add```: returns the sum of a and b. Prototype: ```int op_add(int a, int b)```;
* ```op_sub```: returns the difference of a and b. Prototype: ```int op_sub(int a, int b)```;
* ```op_mul```: returns the product of a and b. Prototype: ```int op_mul(int a, int b)```;
* ```op_div```: returns the result of the division of a by b. Prototype: ```int op_div(int a, int b)```;
* ```op_mod```: returns the remainder of the division of a by b. Prototype: ```int op_mod(int a, int b)```;

### [3-get_op_func.c](./3-op_functions.c)

This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

### [3-main.c](./3-main.c)

This file should contain your main function only.

* You are not allowed to code any other function than main in this file
* You are not allowed to directly call ```op_add```, ```op_sub```, ```op_mul```, ```op_div``` or ```op_mod``` from the main function
* You have to use atoi to convert arguments to int
* You are not allowed to use any kind of loop
* You are allowed to use a maximum of 3 if statements
---
> ## contact

### [twitter](https://twitter.com/RICARDO1470)
### [linkedin](https://www.linkedin.com/in/ricardo-alfonso-camayo/)
### [mail](1466@holbertonschool.com)
