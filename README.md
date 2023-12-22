# PLP-3 Functions

C++ includes multiple types of loops including While loops, For loops, and Do-while loops.    


While Loops: Repeats code so long as the boolean condition is true 


while (true){//code };
**********

For Loops: Continues to execute so long as the boolean condition is true

for (true) {//code};
**********

Do-while loops: Checks if the boolean condition is true or false after 1 execution

do{//code} while (true);
**********

The syntax for declaring a function in C++ is the following:
return_type function_name (parameters) {function body}


In C++, rules about where functions need to be placed in the code file so that it may run only matters if you don’t use function prototypes. You can define functions after the main function or any function calling it, and the code file will run and compile so long as there is a function prototype or declaration before the function is called. 


C++ supports recursive functions. Recursive functions are functions that call themselves directly or indirectly. 


C++ is a language that accepts multiple parameters in different data types as shown in the example below:
void testCode(std::string name, int age, double height) {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << " years old" << std::endl;
    std::cout << "Height: " << height << " feet " << std::endl;
} //The data types we have here are string, and integer(int), and a floating integer(double)


Technically, you can only return one value in a C++ function. However, there are ways around this restriction. Functions in C++ can return multiple values at the same time through pointers, structures, and arrays. 
Pointers: By passing the argument with their address you can make changes in the value with the pointer so that the value will get changed to the original argument. 
Structures: When defining a structure, define with two integer variables and storing the greater and smaller values in those variables. You can just use the values of that structure. 
Arrays: When returning items of the same type, when the array is passed as an argument, its base address is passed to the function. Whatever changes that were made to the copy of the array will be changed in the original. 


Pass by value in programming is used by passing the address of the original variable and any changes within that parameter in that function affect the original variable. Pass by value is used by a copy of the variable being made and passed into the function. Here, any changes made within that parameter in that function don’t affect the original variable. C++ uses pass by value as a default but there is special syntax * & * that can be used in order to use pass by reference parameters. 
(int x)//Pass by value
(int &x) //Pass by reference


During execution, the following are stored in the stack and the heap
Arguments: Arguments passed by value are stored in the stack because it’s a copy of the argument and is a small and efficient size. Arguments passed by reference are also stored in the stack (the actual address) but the data is stored in the heap. 
Parameters: Parameters are stored in a stack. When the function is called space is made in the stack once the values in the arguments are passed to the function.
Local Variables: Local variables are stored in a stack and space for the local variable is made once the function is called 


The following are some of the scoping rules in C++: 
Local variables - They are declared inside a block *{}* and do not exist outside of the box in which they are declared in.
Global variables - They are declared at the top of the program outside of all of the functions and blocks and are available throughout the entire program.
Loop code block variables - Declared within loop code block, variables only exist within the loop and nested blocks are only available within the loop - once it has finished executing it ends
Function code block variables - Declared within function code block, variables only exist within the block and nested blocks and are available throughout the entire program.


Side effects are observable changes in the program or the program's execution which doesn’t relate to producing the value of the expression. In C++ side effects are possible and can include, but are not limited to: modifying variables, input/output operations, and altering data structures. Unfortunately because C++ allows them and they are necessary in some cases for achieving functionalities, there are no guard rails against side effects. However, there are measures you can take to prevent side effects from occurring:
Using const and immutability: const is a keyword used to indicate that a variables value is constant - when declaring functions and variables use const
Pure functions: They only depend on their input parameters
Avoiding global variables: They are available throughout the entire program so functions are more prone to modifying them.


Sources:

https://cplusplus.com/doc/tutorial/functions/
https://www.educative.io/answers/how-to-return-multiple-values-from-a-function-in-cpp17
https://www.geeksforgeeks.org/how-to-return-multiple-values-from-a-function-in-c-or-cpp/
​​https://www.bogotobogo.com/cplusplus/valuevsreference.php#:~:text=C%2B%2B%20uses%20call%2Dby%2Dvalue,mimic%20call%2Dby%2Dreference.
https://www.geeksforgeeks.org/scope-of-variables-in-c/?ref=lbp
https://www.youtube.com/watch?v=6U42W0A4ov4&t=40s

