/*
** EPITECH PROJECT, 2024
** d05 - my_compute_power_rec
** File description:
** recursive tunc, returns nb^p
*/

int my_power(int nb, int p)
{
    int res;

    res = nb;
    if (p == 0) {
        return (1);
    } else if (p < 0) {
        return (0);
    }
    if (p == 1) {
        return nb;
    }
    p--;
    res *= my_compute_power_rec(nb, p);
    if (res > 2147483647) {
        return 0;
    }
    return (res);
}
