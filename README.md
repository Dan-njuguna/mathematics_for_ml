# STATISTICS FOR MACHINE LEARNING

## Basic probability rules and models

- **Probability:** It is the likelihood of an event happening.

### Terminologies

- **Trial or Experiment:** action leading to result with certain likelihood of occurence.
- **Sample space:** a set of all possible outcomes of an event.
- **Event:** non-empty subset of a Sample Space.

## Basic probability calculation

- If ***A*** is an event of an experiment and it contains ***n*** outcomes and ***S*** is the sample space then:

$$
P(A) = \displaystyle\sum_{i=1}^{n}P(E_i)
$$

where;
$P(A) = \frac{\text{No. of outcomes in A}}{\text{No. of outcomes in S}}$

### Outcomes

- **Complement of A:**  the result of an event of A which meant **not** ***A***. Denoted as:
${A}^{c} = 1 - {P(A)}$
- **Union or intersection:** the probability of intersection of two events ***A*** and ***B*** is $P(A \cap B)$. When the event A occurs in union to B, we define the probability as: $P(A \cap B) = P(A) + P(B) - P(A \cup B)$. Also referred to as: **addition rule of probability.**
- **Mutually exclusive:** Where the two events have non-overlapping outcomes.  If ***A*** and ***B*** are mutually exclusive events, then, $P(A \cap B) = 0$. i.e:

$$
P(A \cup B) = P(A)  + P(B)
$$

## MEAN, MODE & MEDIAN

- Solving a statistical problem that involves mean, mode and median requires good Mathematical understanding of the topics.

### MEAN

- **Mean**: It is the average value gotten of the total values of multiple numbers. Example:

$$
\bar{x} = \frac{1}{n} \displaystyle\sum_{i=1}^{n} x_i
$$

-**Mode**: Is the most repeated value. Can be one set of modal values or more.
-**Median**: Is the center most value.

- Given the definitions for the above. We should tackle a simple challenge(I specifically used a HackerRank Challenge.)

#### Question

- ***Calculate the mean, median and modal values for an array X, having N integers in it. If there are more than 1 modal values, the one with least numerical value is used. Modal value should be an integer while the mode and median should be decimals written to 1 decimal place.***

- [Solution](mean_mode_median.c)

## WEIGHTED MEAN

- You would ask, what is weighted mean? Well, not until we have C at hand to manouver this challenge. Then let's first give a brief explanation of ***weigthed mean*** and the challenge we should be ready to tackle.

- **Weighted mean**: is a type of average that assigns different weights to values in a dataset. (Oh! I forgot to mention we are now going into the realms of Machine Learning!)
- Unlike [regular arithmetic mean](mean_median_mode.c),  it considers **relative significance** of each value.

### Formula

$$
\text{Weighted Mean} = \frac{\sum (w \cdot x)}{\sum w}
$$

### Challenge

- _Given Arrays X and W of length N. Representing the respective weights of X's, calculate the and print the weighted mean of X's elements. Answer given in 1 decimal place*

### Solution

- Find Solution [Here](weightedmean.c).

## References

- [HackerRank]("https://www.hackerrank.com/domains/tutorials/10-days-of-statistics")
- [HackerEarth]("https://www.hackerearth.com/practice/machine-learning/prerequisites-of-machine-learning/basic-probability-models-and-rules/tutorial/")
