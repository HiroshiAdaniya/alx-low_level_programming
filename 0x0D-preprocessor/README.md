# Preprocessor: a text substitution tool

When compiling a source code, we now know there are 4 stages in the compilation;

	1. Preprocessing
	2. Compiling 
	3. Assembly
	4. Linking

The preprocessor is the first step in compilation and lines that begin with a '#' sign are interpreted by the preprocessor as preprocessor directives. This means when declaring the preprocessor directives it will help reducing repetition in the source code by being able to define macros, using inline files, and conditionally omit code. 

So far, the most common preprocessor directive we have used in our source code is the "#include", which allows us to use the standard library, standard input / output... (etc), our own personal helper files or other source codes (.c). The preprocessor searches for these files in the local directory (unless specified otherwise) and expands them into your source code.

Example:

	#include <stdio.h>
	#include <stdlib.h>
	#include "main.h"	<---- NB!! Remember when adding your own helper files/ libraries / source codes, use the double quotaton marks ("")

	int main(void)
	{
		/* code goes here */
	}

When a function is called in our source code from the "stdio.h", "stdlib.h", or any other file / library, the preprocessor substitutes those with the definitions contained in the included files. 

There are many other preprocessor directives such as;

	#define
	#undefine
	#if
	#else
	...

### Macros / preprocessor variables

When creating our helper file we usually use the "#ifndef", "#define" and "#endif" macros to help define constants in these files.

In our source files we tend to use the "#define" more frequent to define our macros.

An example of defining a macro in a source file

	#define PI 3.14

This will allow us to include the words PI in our source code, and wherever it appears in our code the preprocessor will substitute it with the numbers "3.14".

Example 1: macro integers

	#include <stdio.h>
	#include "main.h"
	
	#define PI 3.14

	int main(void)
	{
		double a = PI * 2;

		printf("%.2lf, %.2lf\n" PI, a);
	}

This will print to the stdout:

	3.14, 6.28

You can probably determine that the variable 'a' can be changed within the scope of the main function (unless passed as a pointer to another function), whereas PI is a constant variable and cannot be changed.

Example 2: macro strings

	#include <stdio.h>
	
	#define GREET "Hello, There. Nice to meet you"

	int main(void)
	{
		printf("%s\n", GREET);
	}

We have defined a macros with a string and this constant will allow us to print the string whenever it is called. A tip for good practice is to always capitalize your macro definition because when defining variables we do tend to use small-caps, so this helps confusion when it comes to the preprocessor.

Example 3: macro functions

	#include "main.h"
	
	#define sum(a, b) a+b

	int main(void)
	{
		return (sum(4,5));
	}

We can also define macros as functions and here we used a simple addition function that will return a value of 9. sum() and arguments of 'a' and 'b' were initialized and the definition of 'a' + 'b' was added. An upside to this is that it is much faster than the usual initializing and declaring of functions so this will save time.

#end
