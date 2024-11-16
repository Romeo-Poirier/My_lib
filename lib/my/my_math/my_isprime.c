/*
** EPITECH PROJECT, 2024
** d05 - my_isprime
** File description:
** return 1 if nb is prime, 0 otherwise, works only for int
*/

int my_isprime(int nb)
{
    int x;

    x = 2;
    while (x < 2147483647) {
        if ((nb % x == 0 && x != nb) || (nb % x == 0 && x == nb))
            break;
        else
            x++;
    }
    if (x == nb)
        return 1;
    else
        return 0;
}
