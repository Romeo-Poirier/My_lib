/*
** EPITECH PROJECT, 2024
** d04 - my_swap
** File description:
** swpas the content of 2 int using their adresses
*/

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
