#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
<<<<<<< HEAD
    quick_sort(array, n);
=======
    insertion_sort_list(&list);
>>>>>>> 01c543c7a32ea220b9aadb80d198cb9b78114552
    printf("\n");
    print_list(list);
    return (0);
}