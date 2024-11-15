/*
** EPITECH PROJECT, 2024
** d05 - my_is_prime
** File description:
** return 1 if nb is prime, 0 otherwise, works only for int
*/

int my_is_prime(int nb)
{
    int x;

    x = 2;
    while (x < 2147483647) {
        if ((nb % x == 0 && x != nb) || (nb % x == 0 && x == nb)) {
            break;
        } else {
            x++;
        }
    }
    if (x == nb) {
        return (1);
    } else {
        return (0);
    }
}
