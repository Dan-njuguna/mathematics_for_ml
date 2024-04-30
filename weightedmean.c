#include "stats.h"
/**
 * weightedmean - calculates the weighted mean of two arrays.
 * @lst1: the first array
 * @lst2: the second array
 * @len: length of the lists
 * Return: The Weighted mean.
*/
float weightedmean(int *lst1, int *lst2, int len)
{
    int i, res = 0;
    int *new_list;
    float wmean, sum1, sum2;

    sum1 = 0.0;
    sum2 = 0.0;
    new_list = (int *)malloc(len * sizeof(int));
    for (i = 0; i < len; i++)
    {
        res = lst1[i] * lst2[i];
        new_list[i] = res;
        sum1 += res;
        sum2 += lst2[i];
    }

    wmean = sum1 / sum2;

    free(new_list);
    return (wmean);
}
/**
 * main - entry point
 * Return: Always 0
*/
int main(void)
{
    int N, i;
    int *X, *W;
    float mean;

    printf("Enter the length of arrays: ");
    scanf("%d", &N);

    X = (int *)malloc(N * sizeof(int));
    if (!X)
    {
        fprintf(stderr, "Error: Failed to allocate memory.\n");
        exit(EXIT_FAILURE);
    }

    W = (int *)malloc(N * sizeof(int));
    if (!W)
    {
        fprintf(stderr, "Error: Failed to allocate memory.\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter the values for array X:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
    }
    printf("Enter the values for array W:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &W[i]);
    }

    mean = weightedmean(X, W, N);
    printf("Weighted mean: %.1f\n", mean);

    free(X);
    free(W);

    return (0);
}