#include <stdio.h>

void linear_search(int array[], int length, int value);
void binary_search(int array[], int length, int value);

int main(void)
{
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int length = sizeof(array) / sizeof(array[0]);
    int value = 0;

    // All of the functions are zero-based. (ex. 0, 1, 2, etc)
    // All of the functions take integer arrays, for right now.

    // linear_search(array, length, value);
    // binary_search(array, length, value);

    /*
        You can remove the for loop below and uncomment a function above,
        if you'd like to find a single value within the array manually.

        Or, you can keep the for loop below
        and loop through every element within the array.
    */

    for (int i = 0; i < length; i++)
    {
        value++;

        // Uncomment any function to use it within this for loop.

        // linear_search(array, length, value);
        binary_search(array, length, value);
    }

    return 0;
}

void linear_search(int array[], int length, int value)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] == value)
        {
            int index = array[i] - 1;

            printf("The value %d is at index %d in the array.\n", value, index);

            return;
        }
    }
    printf("The value %d  is not found in the array!\n", value);

    return;
}

void binary_search(int array[], int length, int value)
{
    int low = 0;
    int high = length - 1;
    int first_index = 0;
    int last_index = length - 1;

    while (low <= high)
    {
        int middle = (low + high) / 2;
        int element = array[middle];

        if (element == value)
        {
            printf("Value %d found at index %d\n", value, middle);

            return;
        }
        if (element < value) low = middle + 1;
        if (element > value) high = middle - 1;
        if (middle == first_index && element != value)
        {
            printf("%d Is not found!\n", value);

            return;
        }
        if (middle == last_index && element != value)
        {
            printf("%d Is not found!\n", value);

            return;
        }
    }
}