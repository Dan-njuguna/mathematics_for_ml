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

- ***Question: This program checks the probability of Mike and Alice meeting in a romantic setup ,mb: probability of Mike travelling by bus ,ab: probability of Alice travelling by bus, rb: probability of rain, meet_prob: meeting probability. Consider the events as mutually exclusive and independent with regard to their relationship.***
- [Solution](basic_probability.c)

## Chain Rule

- This is a generalization of Product rule, where joint probability of all events will be given by:

$$
 P(X_1, X_2, \ldots, X_n) = P(X_1) \cdot P(X_2 \mid X_1) \cdot P(X_3 \mid X_1 \cap X_2) \cdots P(X_n \mid X_1 \cap X_2 \cap \ldots \cap X_{n-1})
$$

OR

$$
\prod_{k=1}^{n} P(X_k \mid X_1^{k-1})
$$

- Which can be used to calculate the probability of occurence of any number of events.

## Bayes' Rule

- The Bayes' Rule States that:

$$
P(A|B) = \frac{P(B|A)*P(A)}{P(B)}
$$

- Bayes’ theorem describes the conditional probability of event (A) given that event (B) has already occurred.
- The formula calculates the probability of (A) based on the likelihood of (B) given (A), divided by the overall evidence for (B).

### Practicing the Bayes' Theorem of Conditional Probability.

- **Question**: Bob has an important meeting tomorrow and he has to reach office on time in morning. His general mode of transport is by car and on a regular day (no car trouble) the probability that he will reach on time is:
. The probability that he might have car trouble is
. If the car runs into trouble he will have to take a train and only 2 trains out of the available N trains will get him to office on time. What are the chances that he will reach office on time tomorrow?

- [Solution](bayes_rule.c)

- **NB**: The reference practice questions is from [HackerEarth](https://www.hackerearth.com/practice/machine-learning/prerequisites-of-machine-learning/basic-probability-models-and-rules/tutorial/)

## Conditional Probability

- Occurence of an event changes with satisfaction of one or more conditions.
- Example: ***If A and B are two events, then conditional probability of A with relation to B is denoted as P(A|B)***
- For a case of ***independent events*** A and B, P(A|B) = B. When we check the probability of A with relation to B.
- In another case of ***Mutually Exclusive events***, P(A|B) = 0. The probabity of occurence of A after B has happened is 0.

## Product Rule

- $P(A \cap B) = P(A|B) * P(B)$
- Joint probability of A and B is equal to the product of two terms:

1. Probability that B occurs
2. Probability that A occurs given that B has already happened.

$$
A \subseteq B \rightarrow P(A|B) = P(A) / P(B)
$$
$$
B \subseteq A \rightarrow P(A|B) = 1
$$

- **NB:** The distributive, associative and De Morgan's laws from Discrete Mathematics are also valod for probability calculation:

$$
A(A \cup B|C) = P(A|C) + P(B|C) - P(A \cap B|C)
$$
$$
P(A^\complement|C) = 1 - P(A|C)
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

- ***Given Arrays X and W of length N. Representing the respective weights of X's, calculate the and print the weighted mean of X's elements. Answer given in 1 decimal place.***

### Solution

- Find Solution [Here](weightedmean.c).

## References

- [HackerRank](https://www.hackerrank.com/domains/tutorials/10-days-of-statistics)
- [HackerEarth](https://www.hackerearth.com/practice/machine-learning/prerequisites-of-machine-learning/basic-probability-models-and-rules/tutorial/)
