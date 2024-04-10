#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
*/
int main(void)
{
    /**
     * @pct: Probability that he might have car trouble.
     * @pot: The probability that he will reach on time without car trouble.
     * @N: Available trains that can get him to office on time.
     * @pto: The probability that he will reach on time via train.
     * @res_prob: The probability reach office on time tomorrow.
    */

   float pct, pot, N, res_prob;
   float trains_ot = 2;
   float pto;

   printf("Enter PCT, POT, N(all shoud be > 0 but < 1): \n");
   scanf("%f", &pct);
   scanf("%f", &pot);
   scanf("%f", &N);
   pto = trains_ot / N;

   res_prob = pct * pto + (1 - pct) * pot;
   printf("The probability that he will reach on time tomorrow is %.6f\n", res_prob);

   return (0);
}