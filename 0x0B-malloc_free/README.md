
# 0x0B. C - malloc, free

_*Malloc*_ is a dynamic memory allocation function. This allows the allocation of a certain amount of memory during the execution of a program. Malloc does this by requesting memory from the heap.

An important step to make sure that you do not run over the amount of memory that is actually needed, any memory that is no longer needed must be returned to the operating system. This is done through the function _*Free*_

Malloc syntax / prototype

void \*malloc(size_t size);

	1. void * = Pointer to the type of your choice (e.g char, int..)
	2. size_t = Data type that insures a unsigned integer
	3. size = Number of bytes you need to allocate

Free syntax / prototype

void free (void \*ptr);

	1. ptr = The address of the memory space previously allocated and returned by a call to malloc

//end
