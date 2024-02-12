# File I/O

File handling is a way of handling data on our secondary storages devices (e.g hard disk) which allows us to create, read, write, open and close files stored within these devices. The C programming language can handle two types of data files;
s
	* Stream-oriented data files
	
	The data in these files are stored in the same way that they would appeaer on the console

	* System-oriented data files

	These data files are more closely associated with the Operating System (more functionallity that storage data)

In order to handle a file, we would need to follow these steps when creating our source file:

### 1. Declaring a file pointer variable 

Declaring a file pointer variable would allow us to access the data / create the file that we want to handle.

Example:

	#inlude <stdio.h>
	
	int main()
	{
		FILE *file_pointer;

		return (0);
	}
	
	FILE =			This is predefined in the <stdio.h> library and defines a file pointer
	*file_pointer =		The name of the variable / file pointer variable

In this example, you can see that we have declared the standard library, and have declared a file pointer with the data type of "FILE", and named it "file_pointer".

### 2. Open a file

After declaring the file pointer, the next step would be to open a file in a specific mode. The mode would determine if we are creating a file, writing to a file or reading into a file using the function "fopen".

Example:

	int main()
	{
		FILE *file_pointer;
		file_pointer = fopen("the_filename.txt", "mode");
	}

	fopen()	=		The function to open a file
	mode =			The mode you want to open the file in

Mode: Here are a few modes you can open a file in:

	* w:	write-only mode, this will open the file and overwrite what is in it, if the file does not exist it will be created.

	* r:	read-only mode, This will allow you to read whats in the in file, if the file does not exists, NULL is returned.
	
	* a:	append, this will allows a user to add more data to a file at the end of the file. If the file does not exist it will be created.
	
	Binary modes:

	* rb:	This reads the file in binary format
	* wb:	This writes the file in binary format

### 3. Processing the file

The processing of a file is the action of either adding, deleting, creating, changing, etc... data withing that file. Code is used to determine the suitable functions for this process.

Example:

	int main()
	{
		FILE *file_pointer;
		file_pointer = fopen("file.txt", "w")

		fprintf(file_pointer, "a file name\n, %s\n", "Hello World\
		n");

		fclose(file_pointer);
	}

	fprintf() =	This is the process that is being followed through, we are writing to a file using the fprintf function.

The file "file.txt" will now contain the lines "a file name\n Hello World\n" after closing and compiling has been done.

### 4. The final step, closing

The last step in handling a file is to always close it once you are done. IT IS A MUST. Just like like freeing data after using malloc, we must close a file once we have opened it.

Example:

	int main()
	{
		FILE *fp;
		fp = fopen("file.txt", "a");

		fprintf(fp, "goodbye world\n");

		fclose(fp);
	}
fclose is the function used to close the file we have opened.

### File descriptors

