#include <stdio.h>

#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void)
{
    int a[N];

    printf("Enter %d numbers to be sorted: ", N);
    for (int i = 0; i < N; ++i)
        scanf("%d", &a[i]);

    quicksort(a, 0, N - 1);

    printf("In sorted order: ");
    for (int i = 0; i < N; ++i)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

int split(int a[], int low, int high)
{
    // Save pivot in a seperate variable
    int pivot = a[low];

    for (;;)
    {
        // While element pointed to by high is bigger than element pointed to by low, scan array from right to left
        while (low < high && a[high] >= a[low])
            --high;
        if (low >= high)
            break;
        // Until an element to the right of low is reached with value less than low
        // have to be repositioned to low and low shifted to right
        a[low++] = a[high];

        // While element pointed to by low is less than element pointed to by low, scan array from left to right
        while (low < high && a[low] <= a[high])
            low++;
        if (low >= high)
            break;
        // Until an element to the left of high is reached with value greater than high
        // have to be repositioned to high and high shifted to left
        a[high--] = a[low];
    }

    a[high] = pivot;
    return high;
}

void quicksort(int a[], int low, int high)
{

    int middle;

    // Termination condition
    if (low >= high)
        return;

    // Split the array a and get split index
    middle = split(a, low, high);
    // Recursively call quicksort on the two sub-arrays obtained from split
    quicksort(a, middle + 1, high);
    quicksort(a, low, middle - 1);
}

// Note: complexity proven using Master Theorem