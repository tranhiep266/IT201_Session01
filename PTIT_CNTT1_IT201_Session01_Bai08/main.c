#include <stdio.h>

void hasMostFrequent(int arr[], int n)
{
    int maxCount = 0, mostFrequent = arr[0];
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    printf("Most frequent element: %d\n", mostFrequent);
}
// do phuc tap thoi gian O(n^2)
int main()
{
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    hasMostFrequent(arr, n);
    return 0;
}