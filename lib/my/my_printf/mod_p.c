/*
** EPITECH PROJECT, 2024
** mod_p.c
** File description:
** .
*/

#include <stdlib.h>
#include "my.h"

static int base_switch(long long int nb, int base)
{
    char *hexa = "0123456789abcdef";
    long long int quotient = nb / base;
    int len = 0;

    if (nb < 0 || base <= 0)
        return 84;
    nb -= (base * quotient);
    if (quotient < base) {
        if (quotient > 0)
            len += my_putchar(hexa[quotient]);
    } else
        len += base_switch(quotient, base);
    len += my_putchar(hexa[nb]);
    return len;
}

int base_switch_size(long long int nb, int base)
{
    char *hexa = "0123456789abcdef";
    long long int quotient = nb / base;
    int len = 0;

    if (nb < 0 || base <= 0)
        return 84;
    nb -= (base * quotient);
    if (quotient < base) {
        if (quotient > 0)
            len += 1;
    } else
        len += base_switch_size(quotient, base);
    len += 1;
    return len;
}

int mod_p(int width, void *p)
{
    int len = 0;
    long long int adr = (long long int) p;

    len += padding(base_switch_size(adr, 16) + 2, width);
    len += my_putchar('0');
    len += my_putchar('x');
    base_switch(adr, 16);
    return len;
}
