# Dynamic memory allocation: Calloc, realloc, exit

### Calloc

Like malloc, Calloc is a function that request memory from the heap. It's used in the same conditions when we don't know how much memory is needed or when it's dependant on a non-fixed variable. Because memory is such a valuable resource it is always important to mange the memory that is requested and free it.

Calloc does differ from malloc in a few ways; when memory is granted to calloc all it's values are set to zero / '0' until the program reinitializes them, and unlike malloc that request a single block of memory to the size that is requested, calloc is given a continuous set of blocks to the size of memory.

An example:

* Malloc: (on a 64 bit machine)

	int *p = malloc(sizeof(int) * 5);

	--------------
	|  20 bytes  |	<------- one block of the size that was requested (on success) in heap
	--------------

* calloc: (on a 64 bit machine)

	int *p = calloc(5, sizeof(int));

	----------------
	|4B|4B|4B|4B|4B| <------ 5 blocks of the size int that qas requested (on success) in heap
	----------------


Calloc has it's own syntax and takes in two arguments; the first is the number of blocks that's being requested and the sizeof each block. 

Synatx:

	int *ptr = calloc(5, sizeof(int));

	int *ptr =	decalring a pointer, this is stored in the stack
	calloc() =	the dynamic memory allocation function, calloc
	5 =		how many number of blocks being requested
	sizeof() =	size of operator
	int =		the size of each block

Using calloc is an alternative way to allocated memory when you don't want to deal with junk / garbage values in the heap, however calloc does have a time penalty. Because callac assigns zero to all the values that it is given, in doing so it takes a little longer than malloc to complete.

### Realloc

Realloc is also one part of the dynamic memory allocation process. The reallocation function is used wen we want to either INCREASE or DECREASE the memory of an already existing pointer to a memory location. This is key, as we cannot use realloc if we haven't already used malloc or calloc. The purpose is to reallocate and we will do this through the pointer that was used

Realloc takes in two arguments; The pointer to the memory location we want to reallocate, and the size

Another important note to make is that when increasing the memory of the program, our previous data will not be lost but rather increased, and if there is an issue in increasing the memory because of a block issue, the data will be copied to another location in the heap with our previous data plus the extra data that was requested, and that address will be sent to the pointer. The initial address with its data will then be deallocated and freed.

When decreasing the memory, this will have us lose some portion of the data that was stored according to the decreased amount.

Synatx:

	int *ptr = calloc(5, sizeof(int));

	ptr = realloc(ptr, 7 * sizeof(int));

	ptr =		the pointer that will hold the address of the memory allocation
	realloc()	call the realloc function
	ptr =		The location of memory we want to increase or decrease
	7 * sizeof(int) = The amount of memory we want to increase or decrease to

Sometimes, realloc can act as a malloc function depending on the context that it is used int


	int *ptr = realloc(NULL, 7 * sizeof(int));

Here realloc will act as malloc and assign (7 * 4) block of memory to the pointer ptr. Because there is no initial pointer argument in the realloc functoin but rather a NULL pointer, realloc will assign memory to the ptr and not resize.

OR

realloc can also free memory

	int *ptr = realloc(ptr, NULL);

This will assign NULL size data to the pointer and resize it to zero. so in essence it clears the memory / deallocates it.


<sub\>NB!!! ALWAYS REMEMBER TO FREE YOUR DMA! (dynamically allocated memory) <sub\>

### exit()

In our "0x0A-argc_argv" directory I briefly touch on the exit() function (which can be found in the \<stdlib.h\> library) and how it's used in the main function when it's receiving arguments. As a standard, either exit(EXIT_SUCCESS) / '0' is returned OR exit(EXIT_FAILURE) / non-zero int is returned. 

The exit function terminates our program at the stage we call it, this means unlike "return" which returns a value from a function we created to the main function and then only does the program exit, the exit() function allows us to terminates our program at anytime, even when it's not in main function.

Example:

int chat(void);
int main(void);
{
	printf("Hello\n");		<---- printf function called
	chat();				<---- chat function called
	print("Goodbye\n");

	return (0);
}
int chat(void)
{
	printf("Hi, how are you?\n"); 	<----- printf function called
	exit(0);			<----- exit function called
	printf("whats is your name?\n");

	return(0);
}

In this simple program, you can see if pointed only to the functions that will be executed. As you can see, after chat is called, and the statements within it are executed up until the exit function. This terminates the program and everything else is stopped, and a value of '0' is returned to the shell. If we were to "echo $?", you'll notice that the value '0'

### atexit()

The atexit function is a way of following up after the program has exited and this usually calls another function to do some process before finally exiting. In most cases it's used to clean up our program before it exits.
