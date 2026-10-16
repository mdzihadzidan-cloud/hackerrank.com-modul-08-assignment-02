#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        // printf("%d ",x[i]);
    }

    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);

    x[a] = b;
    for (int i = n - 1; i >= 0; i--)
    {

        printf("%d ", x[i]);
    }

    return 0;
}
