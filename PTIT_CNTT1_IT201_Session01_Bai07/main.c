#include <stdio.h>

int hasDuplicate(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return 1;
            }
        }
    }
    return 0;
}
// do phuc tap thoi gian O(n^2)

int hasDuplicateOptimized(int arr[], int n)
{
    int seen[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        if (seen[arr[i]])
        {
            return 1;
        }
        seen[arr[i]] = 1;
    }
    return 0;
}
// do phuc tap thoi gian O(n)