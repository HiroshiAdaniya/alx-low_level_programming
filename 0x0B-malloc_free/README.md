# Dynamic Memory Allocation:  Malloc, Free, Valgrind

## Malloc

Malloc and free are functions of the standard library "<\stdlib.h\>" that helps us to dynamically allocate and deallocate memory during the execution of our program. Malloc is used when we usually don't know how much memory is needed to help execute our program or when it is dependant on a non-fixed variable.

Malloc does this by requesting memory from the heap and if it successful, it returns an address to a pointer to where the base address is located in the heap. An important note to make is that when memory is allocated to malloc, it reserves a single block of memory to the size that was requested.

### step 1 - allocating memory
Syntax:
	
	int a = 4;		<---- declared and initilialized a variable
	int *p = mallloc(sizeof(int) * a);

OR

	int a = 4;
	int *p = (int *)malloc(sizeof(int) * a));

	int =		the data type
	*p =		decliration of a pointer (will hold the address)
	(int *) =	type casting the memeory that is being allocated
	malloc() =	The malloc function being called
	sizeof() =	The sizeof opperator being called to find the size of the data type on the OS
	\* = 		this is calculate the amount of the data type we need
	a = 		how many of the same data type is required

### Step 2 - check return of malloc

An important step before we carry on coding the rest of our program, is to check the return status of the malloc function. If the heap was unable to allocate enough memory, or if an error occurred, malloc returns (NULL). If we fail to do this check, we run the risk of segmentation faults.

Example:

	int a = 400;
	int *p;

	p = (int *)malloc(sizeof(int) * a);

	if (p == NULL)
		return (1);
	// code here

### Step 3 - dereferencing the memory

We can now dereference the memory that was allocated and declare our variable into them through pointer arithmetic or through braces.

Synatx;

	*(p) =		1;
	*(p + 1) =	2;
	*(p + 2) =	3;
	*(p + 4) = 	4;

OR

	p[0] =		1;
	p[1] =		2;
	p[2] =		3;
	p[4] =		4;

### Step 4 - Freeing the heap / memory

## Free

Free is a function that allows us to release the memory we have requested once we are doing using it. This is most important, especially when coding larger programs as it prevents a stack overflow. Because malloc requests memory from the heap, if we do run into a stack overflow this could be especially dangerous as it might cause our system / PC to crash.

Syntax:

	free(p);

	free() =	the free function being called
	p =		the pointer that we are freeing / memory address we are freeing

## Valgrind

Valgrind is a program that allows us to check for any memory leaks within our program and for debugging. We run this in our terminal with the executable file we are checking.

	$ valgrind ./a.out

	valgrind =	checks for memory leaks
	./a.out = 	executable file

#end
