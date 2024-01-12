# Static Libraries

Libraries are groups of pre-compiled object codes that are packaged together to create libraries. Static libraries usually end in a ".a" or ".lib" in windows and are created using an archiver program such as "ar" through a UNIX-like terminal.

This reduces the repetition of creating the same functions over again, and allows us to access these functions during run-time. It copies all the library functions to the executable file during the linking phase.

A good example of a library, is the \<stdio.h\>. These have the predefines codes of your "printf()", "scanf()" and so on, which allows us to access them when creating our own code.

## How to create your own Static Library

### Step 1 - creating object code:

After creating your function / source code (e.g file.c) you will need to then create the object file that is needed and we will do this though a compiler and using the flag "-c". Remember that "-c" stops the compilation process at the assembling stage and will output a file ending in ".o", which tells us that it is an object code.

Example:

	$ gcc -c file.c -o filename.o

	gcc =		This is the compiler we are using
	-c = 		stops compilation at assembler stage
	file.c =	the source code we will be creating the onject code from
	-o = 		renames the file to which ever you specify
	filenaname.o = 	the name you have chose to rename the file, with the .o exstenton

### step 2 - Creating Library

Once you have created all the object codes needed for your library, the next step will be grouping them together into a single library. This will be done through the program "ar", also known as archiver and the flags "rcs" / "rc".

The flags 'r' tells the archiver to replace older object files in the library, while the 'c' flags tells ar to create the library if it does not already exist.

Example:

	$ ar rcs NameOfLib.a objectcode1.o

	ar =		The program archiver used to create a static library
	rcs =		The flags used to created the library
	NameOfLib.a =	The name you have chose to call your library (good practice is to tart it off with lib_nameofLib.a)
	objectcode1.o =	The object file / files that will be helped in the static libaray

### Step 3 - Linking MainFile.c with Static library

The next step will be creating an object file from your main source code. It's important that you have a "main.h" file that contains all the prototypes of the functions used in your MainFile.c and you gave #include "main.h" in your main source code.

Remember that the function definitions for all these prototypes are in their own files which we created object files from and have grouped them into a library.

NB!!: this should all happen in the same directory

Example: 

	$ gcc -c MainFile.c -o Mainfile.o

Now we will be LINKING our MainFile.o to our static library

Example 1: 

	$ gcc -o filename MainFile.o -L. NameOfLib.a

	gcc =		The  compiler we will be using
	-o =		We will rename the output of the file
	FileName = 	The rename of the file (EXECUTABLE FILE)
	MainFile.o =	The main object file we will be linking to your libary
	-L =		Indecates to the linker
	. =		Tells the linker that it is in the currect directory
	NameOfLib.a =	Name of library we are linking to


Example 2:

	$ gcc -o Filename MainFile.o -L. -l_libname

	-l_ = 	if the name of the library name starts with lib
	libname = library name


# Script

### create_static_lib.sh

A script that creates a library called "liball.a" from all the .c files that are in the current directory.

#end
