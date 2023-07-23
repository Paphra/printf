#include <limits.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * main - Entry point
 * test for integer (%i and %d) but also others
 * Return: Always 0
 */
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    _printf("TESTING NULL FORMAT\n");

    len = _printf(NULL);
    len2 = printf(NULL);
    _printf("%d\n", len);
    printf("%d\n", len2);

    _printf("TESTING s specifier with NULL\n");

    len = _printf("%s\n", NULL);
    len2 = printf("%s\n", NULL);

    _printf("%d\n", len);
    printf("%d\n", len2);

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("Current YEAR \t : %d\n", 2023);
    len2 = printf("Current YEAR \t : %d\n", 2023);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("I love it%r: %d\n", 2023);
    len2 = printf("I love it%r: %d\n", 2023);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("NON_INTEGER:%d\n", "NON INTEGER");
    len2 = printf("NON_INTEGER:%d\n", "NON INTEGER");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("LARGE NUMBERS:%d\n", INT_MIN);
    len2 = printf("LARGE NUMBERS:%d\n", INT_MIN);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("LARGE NUMBERS:%d\n", INT_MAX);
    len2 = printf("LARGE NUMBERS:%d\n", INT_MAX);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("CHARS:%d\n", 'a');
    len2 = printf("CHARS:%d\n", 'a');
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    len = _printf("LEADING ZEROS:%d\n", 0045);
    len2 = printf("LEADING ZEROS:%d\n", 0045);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    return (0);
}
