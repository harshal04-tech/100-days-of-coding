// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int first = -1, last = -1;
    int low, high, mid;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    // Find first occurrence
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1; // Search on left side
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Find last occurrence
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1; // Search on right side
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("First occurrence: %d\n", first);
    printf("Last occurrence: %d\n", last);

    return 0;
}