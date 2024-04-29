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

$\bar{x} = \frac{1}{n} \sum_{i=1}^{n} x_i$

-**Mode**: Is the most repeated value. Can be one set of modal values or more.
-**Median**: Is the center most value.

- Given the definitions for the above. We should tackle a simple challenge(I specifically used a HackerRank Challenge.)

#### Question:

- _Calculate the mean, median and modal values for an array X, having N integers in it. If there are more than 1 modal values, the one with least numerical value is used. Modal value should be an integer while the mode and median should be decimals written to 1 decimal place._

- [Solution](mean_median_mode.c)
