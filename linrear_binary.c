#include <stdio.h>
#include <stdlib.h>
int binary_search(int arr[], int elem_search, int count)
{
    // Assumption : The array being passed is already sorted in ascending oreder.
    printf("Binary search result : -\n");

    int low = 0, high = count - 1,mid,iteration_count = 0;
while (low<=high)
    {
        mid=(low+high) / 2;  
        iteration_count++;
        if (elem_search < arr[mid])
        {
            high = mid - 1;
        }
        else if (elem_search > arr[mid])
        {
            low = mid + 1;
        }
        else if (elem_search == arr[mid])
        {
            printf("The element %d is found at inex %d .\n", elem_search,mid);
            printf("The number of iteratons taken for the calculation is %d.\n", iteration_count);
            return 0;
        }
    }
    printf("Element not found .");
}
int linear_search(int arr[], int elem_search, int count)
{
    printf("Linear search reault :- \n");

    int iteration_count = 0;
    for (int i = 0; i < count; i++)
    {
        iteration_count++;
        if (elem_search == arr[i])
        {
            printf("The element %d is found at inex %d .\n", elem_search, i);
            printf("The number of iteratons taken for the calculation is %d.\n", iteration_count);
            return 0;
        }
    }
    printf("Element not found .\n");
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int count = 9;
    int elem_search = 9;
    linear_search(arr, elem_search, count);
    printf("\n");
    binary_search(arr, elem_search, count);
    return 0;
}
