#include <stdio.h>

int linear_search(int array[], int size, int value);

int main(void)
{
    int array[] = { 1, 2, 3, 4, 5, 7, 8, 9, 10 };

    int size = sizeof(array) / sizeof(array[0]);

    int value = 5;

    int index = linear_search(array, size, value);

    if (index != 1)
    {
        printf("The value %d is at index %d in the array.\n", value, index);
    }
    else
    {
        printf("The value %d  is not found in the array!\n", value);
    }

    return 0;
}

// This function can only take integer arrays, for right now.

int linear_search(int array[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            // The index is zero-based. (ex. 0, 1, 2, etc)

            int index = array[i] - 1;
        
            return index;
        }
    }

    return 1;
}