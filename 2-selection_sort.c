#include "sort.h"

/**
 * selection_sort - sorts an array using selective sort
 * @array: an array to be sorted 
 * @size: size of the array
 * 
 */
void selection_sort(int *array, size_t size)
{
    size_t i,j,t, swap;

    for (i = 0; i < size - 1; i++)
    {
        t = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[t])
            {
                t = j;
            }
        if (t != i)
        {
            swap = array[i];
            array[i] = array[t];
            array[t] = swap;
            print_array(array, size);
        }
        }

    }
}