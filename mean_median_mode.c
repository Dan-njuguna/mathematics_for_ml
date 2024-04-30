#include "stats.h"
/**
 * mean - This function calculates the mean of a list.
 * @lst: the array of integers.
 * @len: the length of the array.
 * Return: a decimal, the mean calculated 
*/
float mean(int *lst, int len)
{
    float res;
    int sum, i;

    sum = 0;
    if (!lst)
    {
        fprintf(stderr, "Error: List is empty.");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < len; i++)
    {
        sum += lst[i];
    }
    
    res = sum / len;

    return (res);
}
/**
 * median - calculate the median value of the list.
 * @lst: A list of integers.
 * @len: length of tehe list.
 * Return: the median value as float.
*/
float median(int *lst, int len)
{
    float res;
    int pos, num1, num2;

    if (!lst)
    {
        fprintf(stderr, "Error: List is empty.");
        exit(EXIT_FAILURE);
    }

    if (len % 2 == 0)
    {
        pos = floor(len / 2);
        num1 = lst[pos - 1];
        num2 = lst[pos];
        res = (num1 + num2) / 2;
    }
    else
    {
        pos = floor(len / 2);
        res = lst[pos];
    }
    return (res);
}
/**
 * mode - finds the modal value of a list.
 * @lst: list of integers.
 * @len: length of list.
 * Return: modal value.
*/
int mode(int *lst, int len)
{
    int *counts;
    int max_count, mode, i;

    counts = (int *)malloc(len * sizeof(int));
    max_count = 0;
    for (i = 0; i < len; i++)
    {
        counts[lst[i]]++;
        if (counts[lst[i]] > max_count)
        {
            max_count = counts[lst[i]];
            mode = lst[i];
        }
    }
    free(counts);
    return (mode);
}
/**
 * main: Entry point
 * Return: Always 0
*/
int main(void)
{
    int i, N, mod, *X;
    float men, med;

    printf("Enter length of array: ");
    scanf("%d", &N);

    /*Dynamic memory allocation.*/
    X = malloc(N * sizeof(int));
    if (!X)
    {
        fprintf(stderr, "Error: Failed to allocate memory.");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
    }

    men = mean(X, N);
    med = median(X, N);
    mod = mode(X, N);

    printf("Mean: %.1f\nMedain: %.1f\nMode: %d\n", men, med, mod);

    free(X);
    return (0);
}