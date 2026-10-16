#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x[n];
    int sum = 0;
    int neg_sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        if (x[i] > 0)
        {
            sum += x[i];
        }

        if (x[i] < 0)
        {
            neg_sum += x[i];
        }
    }
    printf("%d %d", sum, neg_sum);

    return 0;
}

