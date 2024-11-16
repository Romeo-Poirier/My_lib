/*
** EPITECH PROJECT, 2024
** task 07 - my_find_prime_sup
** File description:
** returns the smallest prime greater or eq to nb
*/

static int my_is_prime(int nb)
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

int my_find_prime_sup(int nb)
{
    int x;

    x = nb;
    while (my_is_prime(x) != 1) {
        x++;
    }
    return (x);
}
