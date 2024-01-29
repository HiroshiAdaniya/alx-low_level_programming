# Structures, Typedef, Unions

Structures are user-defined data types that consists of one or more primitive data type that allows us to store different kinds of data under the same name within in the same memory location and this also allows us to store more complex data.

### Structures

One way we can define our own data type is through "struct". These structures are usually declared outside the scope of a function and under function prototypes (if any are declared) and can then initialized within functions or outside of them (like global variables / Macros).

Syntax 1: Preferred method

	struct code
	{
		int a;
		char b;
		float c;
	};

	struct =	struct is used to to declare the data type 
	code =		this is the tag we have given the data type
	int a; =	Members of structure
	char b; =	Members of structure
	float c; =	Members of structure
	; =		This will end off the decliration of the struct

Syntax 2:

	struct code
	{
		int a;
		int b;
		int c;
	}c;
	
	code =		in this version, this tag is optional but won't be able to declare more variables in our functions
	c =		decalring of the variable c (can decalare more than one)

An important note to make is that when we declare our user-defined data type, it has NOT been stored in memory, only once we have declared it with a variable within our function then does it take up memory in the stack, as off now "struct code" is seen just like "int" would be.

### Structures: declaring variables

Declaring variables of type struct (aka object of struct), is very simple. Just as we would declare a normal variable, we will do the same with struct.

Example: using syntax 1

	int main(void)
	{
		struct code c;	<----- after decliraton of varible, memory has been allocated
	}

	struct code =	The data type we have created
	c =		the decliration of the variable c

'c' can now be used to store data of type "int", "char", and "float". The memory that has been allocated for the data type of 'c' =  sizeof(int) + sizeof(char) + sizeof(float) / 9 bytes (depending on the system you are using (without structure padding)).

Here us an example declaring more than one variable.

Example:

	int main(void)
	{
		struct code c, z;

		return (0);
	}

In this code, you can see that we have declared two variables 'c' and 'z', and each independently takes up 9 bytes or 18 bytes all together.

### Structures: initializing

There are a few ways we can initialize our data type, one way is after we have declared it.

Example:

	int main(void)
	{
		struct code c = {1, 'v', 1.1};

		return (0);
	}

Here have simply initialized our variable in the exact same order we stated them in our struct, if we do not do that then we will run into potential errors.

A second way is through partial initialization, which means we can initialize one member in our struct and the others will fall into "NULL" /  '0'.

Example:

	int main(void)
	{
		struct code c = {1};

		return (0);
	}

This will initialize the first member of the struct to '1', while the char will be assigned a "NULL" and float with a '0' (float is a decimal so it will be assigned a int of 0).

Alternatively, we can initialize our variables when we declare our struct.

Example

	struct code
	{
		int a;
		char b;
		float c;
	}c = {1, 's', 0.1}; 	<---- You can decalre and initialize more than one variable, just rmemebr that you should use the semi-colon (;), last.

### Structures: Accessing struct members

If you would want to access the individual members of a struct you would need to use the '.' operator.

Example:
	
	int main(void)
	{
		struct code c = {28, 'x', 2.2};

		printf("%d, %c, %f\n", c.a, c.b, c.c);

		return (0);
	}

This example will allow us to print the data that was stored in the variable 'c'.



Just like any other data type, pointers can be used to store the base address of a structure and structures can be used with arrays.

### Structures: Array of Structures

Declaring an array of structures and initializing looks a little different, because we are dealing with an array of structures we would need to use an index to access the address to store information or to store the data.

Example:

	struct info
	{
		int a;
		char b;
	}f;
	int main()
	{
		f[3] = {{2, 'c'},
			{3, 'd'},
			{4, 'e'}};
	}

In this example, I have declared the structure object the same time the structure was declared, so the object / variable 'f' is global and can be accessed by any function.

'f' was declared as an array in the main function and it was initialized with data of ints and chars.
Next i will give an example of how to access them.

	int main()
	{
		int i = 0;
		f[3] = {{2, 'c'},
			{3, 'd'},
			{4, 'e'}};

		for (i = 0; i < 3; i++)
			printf("%d, %c\n", f[i].a, f[i].b);
	}

Here all the data stored in the array of 'f' would be printed. By indexing 'f' we were able to access the individual data stored in each member and print it to the screen.

### Structures: Pointers

when using a pointer to structure there are two ways you can dereference and access the data stored in it. One way is though the arrow operator "->" or through the dereferencing method with the "\*".

This is how you would declare and initialize a pointer to a structure using the same example of the structure declared above. 

	int main()
	{
		int i = 0;
		struct info *p;
		p = &f;

		//or

		struct info *p = &f;
		
		printf("%d, %c\n", f[i]->a, f[i]->b);

		//or

		printf("%d, %c\n", (*f)[i].a, (*f)[i].b);
	}

### Typedef

Typedef is used to create a synonym / alias for a data type and can also be used with user-defined data types.

Here is simple example of a typedef:

	typedef int num;

	typedef = 	The keyword that will peform the task of creating an alias
	int =		The data type we are create a new name for
	num =		The new name we have created for it / the alias

Now using it in a coded example:

	typedef int num;	<----- global typdef and can be used in any function / non-local scope
	typedef char letter;	<----- " "

	int main()
	{
		num b = 77;
		letter c = 'z';

		printf("%d, %d\n", b, c);
	}

These new data types act exactly as the original data types would, printing a integer and a character. Now lets look at how they perform with structures.

	typedef struct code
	{
		int a;
		char c;
	} code_s;

Notice there are two new added features to the definition of this structure, the words "typedef" and "code_s". If the word "typedef" were to be omitted then "code_s" would be a variable that we have declared but because "typedef" is present, this is now the alias of this structure and can now be used as a data type in our code. Take a look at this example bellow:

	int main()
	{
		code_s s;
		s.a = 4;
		s.c = 'z';
	}
Instead of writing the lengthy string "struct code", we have made it much easier and created a word that would be much shorter and easier to type. Because our structure was also set on a global scope, it can be used anywhere.

### Structure padding

Structure padding is an optimization when the compiler automatically aligns your data in a certain way that takes up more storage for the benefit of performance (speed). Because the cpu reads the data from memory in words (depending on the machine (32 / 64 bit machine) 4 / 8 bytes), having the cpu read one variable over the space of more than 1 word would have wasted time.

Example: 32 bit machine (word ==  4 bytes)

	struct space{
		char a;		<----- 1 byte
		int b; 		<----- 4 bytes
	}s;

in memory:
	
	     ---------------------
             |a|b|b|b|b| | | | | |
	     ---------------------
word cycle  = 1 2 3 4 1 2 3 4 1 2 ...

for 5 bytes: 3 cycles were performed

If the cpu would had to read this, it would first read the char (1 byte), and then it would read the first 3 bytes of 'b' (3 bytes) (this is now a word / 4 byes), and then the last byte of 'b' another byte. This means that the CPU processed seeing this data 3 times, but if we had to add padding;

in memory: with paddding

	     -------------------
	     |a| | ||b|b|b|b| |
	     -------------------
word cycle = 1 2 3 4 1 2 3 4 1

for 8 bytes: 2 cycles were performed
The compiled added a 3 byte padding.

The way we declare our variables are also very important! It is important to make sure that the data types that are being declared are in ascending order (char, int, float, double...). If arrays or structs are being used, the larges primitive data type would determine the word cycle size.

	struct code{
		char a[20];
		int b;
		double c;
	};

The word cycle would the sizeof(double), 8 bytes (32 bit machine).

### Structure Packing

Structure packing is when we turn off the feature of the compiler, and allow our data to be stored without padding. This means that the performance will no longer be optimised and memory storage will take precedence.

The way we can activate structure padding is through a preprocessor directive called "pragma"

Example:

	#include <stdio.h>
	#include <stdlib.h.

	#pragma pack(1);

	struct code{
		char e;
		int a;
		char b;
	};

"pack(1)" will turn off the padding and  turn on the packing, so in essence we are evaluating the packing to be true by including the 1.

So the size of our struct will now equal to 6 bytes. If Padding were on, because of the lack of ascending order the total size of this struct would have been 12 bytes and not 8 bytes.

### Structs vs Unions

We know the advantages and reasons as to why we use structures and how it can better help store data. While we have structures, there is another user-defined data type called Union.

Unions follow the same rules of declarations and initializations as structures do, even when using them as pointers and dereferencing them are the same. The only difference between the two is that unions store data differently and is focused on not wasting storage.

When declaring a union, the amount of space is takes up will depend on the member that takes up the most space, for example:

Example:

	union storage {
		int a;	// 4 bytes
		float b; // 4 bytes
		char c[10]; // 10 bytes
	};

	int main()
	{
		union storage s;

		return (0);
	}

In this example you can see how similar unions are to structures, on the surface level the only difference you will spot is the use of the word "union" instead of "struct". However on the RAM, this will differ.

If this were a struct we know that once we defined our object / variable 's', the amount of space assigned to it would equal to 18 bytes (give or take, depending on the machine you are using (without structure padding)).
while a union will only take up 10 bytes in storage, which would be the data type with the most value. This means that when initializing the 's' variable later on in your program the last assigned value will be the value stored in that allocated space. This is what i mean:

Example:

using the same union as above

	int main()
	{
		union space s;
		s.a = 4;
		s.b = 2.2;
		s.c = "hello"; 		<----- this will be the only variable we will be able to acccess as everything else is overwritten

		printf("%d, %.1f, %s", s.a, s.b, s.c);
	}

Our code will give undefined behavior for "s.a" and "s.b" and could print our any garbage value, while "s.c" will print "hello".

//end
