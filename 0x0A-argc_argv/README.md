# Main, argc, argv, exit

### Main
The main function has two prototypes:

	int main(void);

This is a main function that takes no arguments

	int main(int agrc, char *argv[]);

This is a  main function that takes in two arguments.

### argc, argv
"argc" and "argv" are arguments / parameters that are passed to the main function during the execution of a program.

### Syntax:

	int main(int argc, char *agrv[])

OR

	int main(int argc, char **argv)

these are virtually the same thing.

### argc: argument counter

The argument counter is the number of arguments that is passed to the main function. This counter will include the name of the program (if there is one), and any arguments after that.

Example:

if we run a program with the arguments

	$ ./a.out i love coding

	./a.out = 	1
	i = 		2
	love = 		3
	coding = 	4

so argc will == 4


### argv: argument vector

The argument vector is a pointer to an array, in this case, a pointer to the array of arguments that has been passed to the main function and can be accessed through argv.

We can access these strings just like we would through any array.

Example:

	argv[0] =	./a.out
	argv[1] =	i
	argv[2] =	love
	argv[3] =	coding

### \_\_attribute\_\_((unused)) && (void)

 \_\_attribute\_\_((unused)) is an attribute, and an extensions of the gcc compiler which helps with the suppression warnings of possible unused variables and/or parameters in a function.

 To suppress unused parameters in a function:

 	void fun(int s \_\_attriute\_\_((unused)))
	{
		//code
	}

This tells the compiled that the parameter in this function could go intentionally unused.

(void) is a way to cast a variable / parameter and let the compiled know that it is too, intentionally going to be unused.

Example:

	int code(int s)
	{
		(void)s;
		// code here
	}
### exit

By convention, when passing parameters to the MAIN function it's rather preferred to end the program off with the exit() function, than a return statement. This can be found in the <\stdlib.h\> library.

The exit() function has two variations, one if the conditions are met and another one if the conditions are not met. Depending on the host environments the return values might deffer.

Syntax: successful

	exit(EXIT_SUCCESS);

	This returns 0.

Syntax: Failed 

	exit(EXIT_FAILURE);

	This returns a non-zero int.
//end
