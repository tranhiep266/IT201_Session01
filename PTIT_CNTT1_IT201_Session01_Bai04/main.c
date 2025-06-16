#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
    // do phuc tap thoi gian O(n)
    int sum2 = (n * (n + 1)) / 2;
    // do phuc tap thoi gian O(1)
}
