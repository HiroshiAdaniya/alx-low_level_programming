#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("My first strlen!: %d\n", len);
	
    str = "Hiroshi";
    len = _strlen(str);
    printf("hiroshi: %d\n", len);


    str = "love";
    len = _strlen(str);
    printf("love: %d\n", len);
    str = "Find your passion";
    len = _strlen(str);
    printf("Find your passion: %d\n", len);
    str = "I have wack mental health";
    len = _strlen(str);
    printf("I have wack mental health: %d\n", len);
    return (0);
}
