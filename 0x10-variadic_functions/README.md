# Variadic Functions

Variadic functions are functions that that take in a number of different types of argument and it's macros and functions can be found in the <stdarg.h> library. A good example of a variadic function is the printf() fuction. We know that it can take in as many arguments as we specified and print the result to the screen.

Lets look at the syntax of the variadic function and how it is defined.

Syntax: dealing with int arguments

	int display(int num, ...)
	{
		va_list list;
		va_start(list, num);
		int result, i = 0;
		
		for (i = 0; i < num; i++)
		{
			result = result + va_arg(list, int);
		}
		va_end(list);

		return (result);
	}

The prototype:

	int =		The return type of the functon
	display =	the name of the function
	(int num =	This holds the number of arguments that are being passed / simialr to argc
	...) =		The elipsis is what defines this as a variadic function. It indicates to a varibale nume of arguments

The code:

	va_list = 	This a macro that is found in the standard argument library
	list =		This is the name we have give the type an will allow us to iterate over the data that was passed to the function
	va_start =	This function will tell the program where the argument start
	va_arg =	This functions allows us to call the arugment thar is being passed, and lets us handle it.
	(list, int) =	Here we have passed list to the va_arg, and finally the data type that is being given to the function
	va_end(list) =	Finally, we would need to free the list that we created. The va_end acts a as a free();

This Syntax has been coded with the idea of only integers as arguments, when dealing with strings a few of the arguments would need to change to deal with this.

Finding the length of the string would be important and also dereferencing the data in our argument array in a loop to check each value.

Example:

	#include <stdarg.h>
	#include <stdio.h>

	void display(char *, ...);
	int main(void)
	{
		display("sa FOOD sa\n", 'R', 100, 'R', 100);
	}
	void display(char *z, ...)
	{
		int len, i, v = 0;
		va_list m;
		va_start(m, z);

		while (z[len] != '\0')
			len++;

		for (i = 0; i < len; i++)
		{
			if (z[i] == 's')
			{
				char v = va_arg(m, int);
				printf("%c", v);
			}
			if (z[i] == 'a')
			{
				int v = va_arg(m, int);
				printf("%d", v);
			}
		}

		va_end(m);
	}

As you could probably guess, the output of this code would be "R100 FOOD R100".

### Const

Const / constant variables, are declared variables that cannot be changed and will remain constant throughout our program.

Syntax:

	const int a = 5;

if we were to try and reassign the variable 'a' the compiler would give an error.

We can also define constants through pointers and depending where the word "const" falls we can  make either a pointer constant, the address it points to constant or both.

Here are a few examples of that

Syntax:
	
	int a = 4, b = 3;
	const int *p = &a;

Here we define a constant pointer which holds the address of 'a', if we were to dereference our pointer and change its value, we will get an error.

	const int *p = &a;
	*p = 3;		<----- an error would be produced.

we can however change the address it points to

	p = &b;		<----- no error, and now if we derefence, *p = 3;

Now if were to change the position of const and place it after the asterisk, we won't be able to change what the pointer points to.

	int *const p = &a;
	ip = &b		<----- an error will be given
	
but now, we CAN change the value at the address to where the pointer points to. As of now, ip is equal to 4 / the value at 'a'.

	int *const p = &a 	<---- derefenced, p == 4;
	*p = 2;			<--- no error as we are not change the address to what it's pointing to but rather the value.

P is now equal to 2.

Now, if you wanted to not only lock in the address to what p points to but also it's value, we would use const in both positions.

	const int *const p = &a;
	*p = 6;			<---- an error would be given
	p = &b;			<---- an error would be given


//end
