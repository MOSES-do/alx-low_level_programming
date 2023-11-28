#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char a[] = "Talk is cheap. Show me the code.\n";
    char b[] = "TALK IS CHEAP, SHOW ME THE CODE.\n";
    char *p;

    p = leet(s);
    p = leet(a);
    p = leet(b);
    printf("%s", p);
    printf("%s", s);
    printf("%s", a);
    printf("%s", b);
    return (0);
}
