# STATISTICS FOR MACHINE LEARNING

## Basic probability rules and models

- **Probability:** It is the likelihood of an event happening.

### Terminologies

- **Trial or Experiment:** action leading to result with certain likelihood of occurence.
- **Sample space:** a set of all possible outcomes of an event.
- **Event:** non-empty subset of a Sample Space.

## Basic probability calculation

- If ***A*** is an event of an experiment and it contains ***n*** outcomes and ***S*** is the sample space then:

$P(A) = \sum_{i=1}^{n}P(E_i)$

where;
$P(A) = {No. of outcomes in A} \div_ {No. of outcomes in S}$

### Outcomes

- **Complement of A:**  the result of an event of A which meant **not** ***A***. Denoted as:
${A}^{c} = 1 - {P(A)}$
- **Union or intersection:** the probability of intersection of two events ***A*** and ***B*** is $P(A \cap B)$. When the event A occurs in union to B, we define the probability as: $P(A \cap B) = P(A) + P(B) - P(A \cup B)$. Also referred to as: **addition rule of probability.**
- **Mutually exclusive:** Where the two events have non-overlapping outcomes.  If ***A*** and ***B*** are mutually exclusive events, then, $P(A \cap B) = 0$. i.e:

$P(A \cup B) = P(A)  + P(B)$
