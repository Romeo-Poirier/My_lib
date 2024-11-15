/*
** EPITECH PROJECT, 2024
** d05 - my_compute_square_root
** File description:
** if root of nb is whole, returns it, otherwise return 0
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    while (i * i != nb) {
        if (i * i > nb)
            return 0;
        i++;
    }
    return i;
}
