# Bitwise & BASE systems

## Base systems

In the C programming language there are generally 4 number base systems (sometimes more, etc base32, base64) that you can work with and they are responsible for representing numbers in a more compact or human-readable format.

Here are a few examples:

	* Base 2 = Binary | 1's and 0's
	* 0b || 0B (e.g 0b1001 or 0B1001)

[2^number]

This is the language that a computer understands and all codes used to communicate with computers are converted to this base to perform the tasked you needed.

	* Base 8 =  Octal | 0 - 7
	* 0 (e.g 0777)

[8^number]

This is not used as much, but can be used to represent binary numbers in groups of 3 digits to be more legible. For example, Octal is used when deal with read, write, and execution permissions for shell permissions.

	* Base 10 = Decimal | 0 - 9
	* 1-9 (e.g 1234 )
	
[10^number]

Base 10 is something everyone should be familiar with as it is the one base we were taught in school.
This is also the default base in C programming.

	* Base 16 = Hexadecimal | 0 - 9 && A - F
	* 0x || 0X (e.g 0x1FA or 0X1FA)

[16^number]

Hexadecimal is still used quite often, especially in colours in HTML / adobe programming and programming languages. Base 16 provides a compact representation of binary data and can be easily converted to and from binary.

### Base 16 to Base 10 / Hexadecimal to decimal

We know that base 16 ranges from 0 - 9 and a - f, were a == 10 and f == 15.
In order to convert a number from base 16 to base 10 you would need to follow this equation.

Equation:

	decimal / base 10 = (hex1 * 16^0) + (hex2 * 16^1) + (hex3 * 16^2) + (hex4 * 16^3)... (hexn * 16^n-1) 

Examples:

BASE16: 0x1A3F

	0x1A3F  to base 10
	
	= 15 * 16^0 + 3 * 16^1 + 10 * 16^2 + 1 * 16^3
	= 15 + 48 + 2560 + 4096
	= 6719

BASE16: 0xF7D

	= 15 * 16^2 + 7 * 16^1 + 13 * 16^0
	= 3840 + 112 + 13
	= 3956

BASE16: 0xAB09

	= 10 * 16^3 + 11 * 16^2 + 0 * 16^1 + 9 * 16^0
	= 40 960 + 2816 + 0 + 9
	= 43 785

BASE16: 0xD3E5C

	= 13 * 16^4 + 3 * 16^3 + 14 * 16^2 + 5 * 16^1 + 12 * 16 ^ 0
	= 851 968 + 12 288 + 3584 + 80 + 12
	= 867 932

Example with a decimal point:

BASE16: 0x3B4.C8

Anything after the decimal point will be to the negative power starting from -1 onwards.

	= 3 * 16^2 + 11 * 16^1 + 4 * 16^0 . + 12 * 16^-1 + 8 * 16^-2
	= 768 + 176 + 4 + . 0.75 + 0.03125
	= 948.78125

### Base 10 to Base 2 / decimal to Binary

BASE10: 20

	16 8 4 2 1
	1  0 1 0 0

Binary: 10100
## Bitwise

Bitwise operators are responsible for manipulating individual bites which allows us to to perform operations on binary numbers (1's and 0's). This would apply to decimals and character values as they are made up of the smallest data structures of 1 byte (8 bits).

There are 6 bitwise operators in the C programming language:

	* & :		AND operator
	* | :		OR operator
	* ~ :		NOT operator
	* << :		LEFT SHIFT operator
	* >> :		RIGHT SHIT operator
	* ^ :		XOR operator

### & / AND

The '&' is a binary operator which means it takes in two integers / characters (ascii numbers) and can compare two bits at a time and performs the "AND" operation. The result would be 1 if both bits are 1.

In binary:

	7 = 0111 
	4 = 0100

Example:

	  0111
	& 0100
	= 0100

SO
	7 & 4 = 4

The result after comparing each bit would equal to 4.

As you can see in the example, after converting the two integers into binary, we compared the bit of each integer and where both were 1, the result was equal to 1.

### | / OR

The '|' operator follows the same rules as the '&' operator, the only difference is that if both bits are 0 then the result is 0, in other words one of the bits has to be 1 for it to equal to 1.

Example:

	  0111
	| 0100
	= 0111

SO

	7 | 4 = 7
### ^ / XOR

The '^' operator takes in two operands and checks if the bites are different, if so, it will be 1, otherwise if they are the same it will equal to 0.

	  0111
	^ 0100
	= 0011

SO

	7 ^ 4 = 3

### ~ / NOT

The '~' operator is a unary operator, this means that it only needs one operand to perform a task. The NOT operator takes each individual bit and converts each bit to its opposite binary. The result would be that if the bit is 0 then it would changed to 1, and if the bit is 1 then it would equal 0.

Example:

	 ~ 0111
	 = 1000

	 ~7 = 8

### << / LEFT SHIT

The "<<" operator is a unary operator but takes in two values, the first operand we will the one that the operation will be performed on while the second operand is how much shifting that will be done. In this case, we will shift the bits to the left and any trailing positions are filled with 0's.

Example:

	   0111
	<<    2
	= 11100

SO

	7 << 2 = 28

An important note to make:

To workout the result of left shifting we would need to times the number by 2 to the power of the right operand (ledfOperand * 2^rightOperand), in this case 7 * 2^2.

	7 * 2^2 = 28

### >> / RIGHT SHIFT

The ">>" operator follows the same rules as the left shift, except that the shifting will now be moved to the right and any leading options will be filled with 0's.

The equation for left shitting involved taking the first operand and multiplying it by 2 to the power of the left operand, in this case it will now be division.

Example:

	   0111
	>>    2
	=  0001

SO

	7 >> 2 = 1
OR
	7 / 2^2 = 1 
	7 / (4) = 1

//end
