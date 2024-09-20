#include <stdio.h>

#define N 5

void selection_sort(int arr[], int n);
int find_largest(int arr[], int n);

int main(void)
{

    int arr[N];

    printf("Enter a series of %d non negative integers: ", N);
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, N);

    printf("Sorted series: ");
    for (int i = 0; i < N; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int find_largest(int arr[], int n)
{
    int idx_largest = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] >= arr[idx_largest])
            idx_largest = i;
    }
    return idx_largest;
}

void selection_sort(int arr[], int n)
{
    int idx_largest;
    int last_element = arr[n - 1];

    // Base case: array containing a single element
    if (n == 0)
    {
        return;
    }

    // Scan the array to find the largest element
    idx_largest = find_largest(arr, n);

    // Swap largest element with last element
    arr[n - 1] = arr[idx_largest];
    arr[idx_largest] = last_element;

    // Recursively call selection_sort on the sublist [0,...,n-1]
    selection_sort(arr, n - 1);
}