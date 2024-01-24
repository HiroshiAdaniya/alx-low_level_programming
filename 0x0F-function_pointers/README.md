# Function pointers

### Declaring and Initializing function pointers

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

### Callback Functions

Callback functions are functions that take function pointers as arguments. This allows us to pass the address of a function as an argument to another function and allow it to perform a specific task. Just like any c programming function, Callback functions and function pointers are there to help reduce the amount of code produced and to make things easier on the coder / developer.

Here is an example of a callback function:

This is the function we have declared and initialized

	int plus(int a, int b)
	{
		return (a + b);
	}

This function is the callback function and is in charge of taking a function pointer as an argument

	void display(int (*p)(int, int))	<---- here you can see the return type, the functon pointer and the arguments of the functon it is suggestion to.
	{
		int i = p(2,3)
		printf("%d\n", i);
	}

	void =		the return type of the display function as it returns nothing
	display =	the name of the function
	(int	=	this is the return type of the function we are passing as an argument
	(*p)	=	here we have declared the function pointer
	(int, int)); =	Lastly, these arguments should match the arugments of the function you are accessing

Finally we have the main function that call the callback function and then passes the initial function as an argument.

	int main(void)
	{
		display(plus);
	}

#end
