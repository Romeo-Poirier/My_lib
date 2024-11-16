/*
** EPITECH PROJECT, 2024
** main
** File description:
** .
*/

static int my_putchar(char c)
{
    write(1, &c, 1);
    return1;
}

int base_switcher(int nb, int base)
{
    char *hexa = "0123456789abcdef";
    int quotient = nb / base;
    int len = 0;

    if (nb < 0 || base <= 0)
        return 84;
    nb -= (base * quotient);
    if (quotient < base) {
        if (quotient > 0)
            len += my_putchar(hexa[quotient]);
    } else
        len += base_switcher(quotient, base);
    len += my_putchar(hexa[nb]);
    return len;
}

int base_switcher_maj(int nb, int base)
{
    char *hexa = "0123456789ABCDEF";
    int quotient = nb / base;
    int len = 0;

    if (nb < 0 || base <= 0)
        return 84;
    nb -= (base * quotient);
    if (quotient < base) {
        if (quotient > 0)
            len += my_putchar(hexa[quotient]);
    } else
        len += base_switcher_maj(quotient, base);
    len += my_putchar(hexa[nb]);
    return len;
}

int base_switcher_size(int nb, int base)
{
    char *hexa = "0123456789abcdef";
    int quotient = nb / base;
    int len = 0;

    if (nb < 0 || base <= 0)
        return 84;
    nb -= (base * quotient);
    if (quotient < base) {
        if (quotient > 0)
            len += 1;
    } else
        len += base_switcher_size(quotient, base);
    len += 1;
    return len;
}
