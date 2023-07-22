// Online C compiler to run C program online
#include <stdio.h>

/**
 * THESE TESTS ARE MEANT TO COPY PASTE IN PROGRAMMIZ
 * REAL TEST CAN BE DONE LATER
 * You can inven increment from the subfunction using the double pointer
 * But I noticed we don't need it. So, in the test without specifiers,
 * I removed this line (*fmt)++;
 */
int _printpercent(char **fmt, int current_n_by)
{
    putchar(**fmt);
    current_n_by += 1;
    (*fmt)++; /*using the address of the format of _printf to allow increment*/
    return (current_n_by);
}

int main()
{
    // Write C code here
    char *format = "Hello World\n";
    int i = 0;

    printf("current address of format:%p\n", format);
    i = _printpercent(&format, i);
    printf("\n");
    printf("current address of format:%p\n", format);
    printf("current i=%d\n", i);

    return 0;
}
