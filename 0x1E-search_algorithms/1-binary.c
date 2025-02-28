#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints the elements of an array within a given range
 * @array: Pointer to the first element of the array
 * @left: Left boundary index
 * @right: Right boundary index
 */
void print_array(int *array, size_t left, size_t right)
{
    size_t i;
    
    printf("Searching in array: ");
    for (i = left; i <= right; i++)
    {
        printf("%d", array[i]);
        if (i < right)
            printf(", ");
    }
    printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * 
 * Return: The index where value is located, or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1, mid;

    if (!array)
        return (-1);
    
    while (left <= right)
    {
        print_array(array, left, right);
        mid = left + (right - left) / 2;

        if (array[mid] == value)
            return ((int)mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
