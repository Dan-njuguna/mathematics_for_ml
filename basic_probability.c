#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * Return: Always 0
*/
int main(void)
{
    /**
     * This program checks the probability of Mike
     * and Alice meeting in a romantic setup
     * @mb: Probability of Mike travelling by bus
     * @ab: Probability of Alice travelling by bus
     * @rb: Probability of rain
     */
    float mb, ab, rb;
    float meet_prob; /*Meeting probability*/

    printf("Enter the probabilities of Mike and Alice travelling by bus and\
    that of rain respectively eacy on a new blank line(0 <= P <= 1).\n");
    scanf("%f", &mb);
    scanf("%f", &ab);
    scanf("%f", &rb);

    meet_prob = mb * (1 - ab) * rb + ab * (1 - mb) * rb;
    printf("Probability of meeting in a romantic set up is: %.4f\n", meet_prob);

    return (0);
}