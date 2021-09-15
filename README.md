# BASIC CODING INTERVIEW QUESTIONS

## In C language

<b>1) What are the key features of C programming language?</b>

. C was founded by Dennis Ritchie.

. It is flexible and hence can be controlled by the programmer.

. Breaks down larger programs into smaller modules. 

. C comes with support for system programming and hence it compiles and executes with high speed when compared to other high-level languages.

<b> 2) What happens when you compile a program in C? </b>

. Source object file is sent to the compiler it gets processed and is sent as object file. 

<b> 3) What is the use of header files in C? </b>

. Header files contain the definitions and set of rules of the functions being used in the programs.

<b> 4) What happens if a headerfile is included twice? </b>

. If a header file with proper syntax is included twice, the second one gets ignored.

<b> 5) Can a program be compiled without the main() function? </b>

Yes it can be compiled but execution not possible. Using define function it is possible. 

<b> 6) What are the basic data types in C? </b>

. Int Used to represent a number (integer)

. Float Used to represent a decimal number

. Double Used to represent a decimal number with highest precision(digits after the decimal point)

. Char Single character

. Void Special purpose type without any value


<b> 7) Is it possible to store 32768 in an int data type variable?</b>

Use unsigned value if its non negative. Else long int would be fine.

<b> 8) What are Keywords in C? </b>

They are used to perform different functions. These are Reserved words. Egs: break, else, if

<b> 9) What is the difference between static & global variables? </b>

Global variables are variables which are defined outside the function. The scope of global variables begins at the point where they are defined and lasts till the end of the file/program. Whereas, static global variables are private to the source file where they are defined and do not conflict with other variables in other source files which would have the same name.

<b> 10) What is Memory Leak in C? </b>

When programmers create a memory in the heap and forget to delete it. It decreases the efficiency of the performance of the system.

<b> 11) What is Static and Dynamic memory allocation? </b>

Static memory happens at compile-time. 

Dynamic memory happens at run-time.

<b>12) What is the difference between prefix and postfix? </b>

Prefix - The value stored in the variable a gets incremented and then gets assigned to the same variable.

Postfix - The value stored in the variable a gets incremented after the execution of the particular line.

<b> 13) What is the difference between while (0) and while (1)? </b>

while(0) - program will never get executed

while(1) - infinite loop

<b> 14) What is a Dangling Pointer in C? </b>

Pointer pointing to the memory location which is deleted.

<b> 15) What is the difference between the Void and Null Pointer? </b>

Null pointers generally do not point to a valid location.

Void pointer - the type of data that it points to can be anything.

<b> 16) What is the difference between Pass by value and Pass by reference? </b>

In pass by value, changes made to the arguments in the called function will not be reflected in the calling function. 

Whereas in pass by reference, the changes made to the arguments in the called function will be reflected in the calling function.

<b> 17) What is a pointer on a pointer in C programming language? </b>

A pointer variable that contains the address of another pointer variable is called as a pointer on a pointer.

<b> 18) Difference between malloc() and calloc() functions? </b>

Both allocate memory dynamically, which means that memory is allocated during the runtime.

<b> 19) What is the difference between Arrays and Pointers? </b>

An array is a collection of elements of similar data type whereas the pointer is a variable that stores the address of another variable.

<b> 20) What is the difference between a structure and a Union? </b>

. All the members of a structure can be accessed simultaneously but union can access only one member at a time.

. Lesser memory is needed for a union variable than a structure variable of the same type

<b> 1) What are the different types of modifiers in C? </b>

signed, unsigned, long, short, long long

<b> 2) What is a static variable? </b>

A static local variable retains its value between a function call and it's default value is 0.

<b> 3) What are lvalue and rvalue? </b>

rvalue holds the expression of an assignment operator. lvalue holds variable.

<b> 4) What is typecasting? </b>

Typecasting is a way to convert a variable/constant from one type to another type.

<b> 5) What are the stages in C compilation? </b>

Preprocessing, compilation, assembling and linking.

<b> 6) Difference between the header file and library file. </b>

library file holds function body whereas header file holds the prototype.

<b> 7) What is a ternary operator? </b>

Used instead of if else condition. (?, :)

<b> 8) Difference between memcpy() and strcpy() functions in C. </b>

memcpy() function is used to copy a specified number of bytes from one memory to another.

Whereas, strcpy() function is used to copy the contents of one string into another string.

<b> 9) What is const pointer in C? </b>

Once const pointer is made to point one variable, we can’t change this pointer to point to any other variable.

<b> 10) What is the difference between variable declaration and variable definition in C? </b>

Variable declaration tells the compiler about data type and size of the variable. Whereas, variable definition allocates memory to the variable

<b> 11) What is enum in C? </b>

Enumeration is a data type that consists of named integer constants as a list.

<b> 12) Is there a difference between class and struct? </b>

The only difference between a class and struct are the access modifiers. Struct members are

public by default; class members are private. It is good practice to use classes when you need an

object that has methods and structs when you have a simple data object.

<b> 13) What is a main() and difference b/w void main() and int main()? </b>

main() is an entry point. 

void main() returns nothing. No need of return statement.

int main() needs a return statement.

<b> 1) What is a built-in function in C? </b>

Built-in functions are library functions. Egs: scanf, printf, etc.

<b> 2) In C, What is the #line used for? </b>

It is a preprocessor statement. Used to reset the line number.

<b> 3) How can a string be converted to a number? </b>

Use atoi function.

<b> 4) How can a number be converted to a string? </b>

Use sprintf function.

<b> 5) What are the advantages of Macro over function? </b>

Saves a lot of time.

<b> 6) Specify different types of decision control statements? </b>

.if-else

.else-if

.nested 

.switch 

<b> 7) What is call by reference in functions? </b>

When the caller function makes a function call by passing the addresses of actual parameters being passed, then this is called call by reference.

<b> 8) What is typedef? </b>

typedef is a C keyword, used to simplify the existing type declaration syntax.

<b> 9) Why is it usually a bad idea to use gets()? </b>

There would be a restriction in the input range.

<b> 10) Difference between gets() and scanf in C? </b>

scanf() is used to read any data type in C. 

gets() is used to read string input.

<b> 11) Difference between puts and printf? </b>

printf() prints string as well as variables. 

puts prints a string alone.

## In Python Language

