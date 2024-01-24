# Function pointers

Function pointers are pointers that point to an address of a function. This pointer does not point to data but rather a set of code. There are two ways of initializing a function pointer.

Say we have a declared a function called plus() that adds two integers:

	int plus(int a, int b)
	{
		return (a + b);
	}
	
The syntax for declaring and initializing a function pointer would look like this.

Syntax 1:

	int main(void)
	{
		int (*ptr)(int, int) = &plus;

		/* OR */

		int (*ptr)(int a, int b);
		ptr = &plus;
	
		int c = (*ptr)(3, 3);
	}

	int =		The return type of the function
	(*ptr) =	The pointer variable that will be used to store the address of the functon
	(int, int) =	This is the argument that the function takes, this should be the same as the function prototype
	&plus =		This will assign the address of the functoin to the pointer we declared.

	int c =		Here we have declared a variable that will take the result of the function
	(*ptr) =	We are dereferencing the pointer to the function that we have stored in it
	(3, 3) = 	These are the arguments we chose to pass to the function

You can see there were slight differences in the way that the arguments were declared and this follows the same rules as function prototypes.

In the last section of the code where we have declared and initialized the int variable 'c', we have dereferenced the pointer ptr, and passed two arguments into it, because there is no printf statement, tit will not print anything, but the value of 'c' in memory will be '6'.

Here is how the second version of the syntax will look:

Syntax 2:

(using the same main plus function as above)

	int main(void)
	{
		int (*ptr)(int, int);
		ptr = plus;

		int c  = ptr(3,3);
	}

Here we have omitted the address of operator, this will have no effect on how the function operators and this has to do with preference rather than function.

Note: You no longer need to dereference the pointer.
