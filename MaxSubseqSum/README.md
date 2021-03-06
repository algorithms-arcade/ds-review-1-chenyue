---
layout: home
title: Maximum Subsequence Sum
#permalink: index.html # in case of we remove the index.md file, this doc will be the index page
---

## Description
------

[Contents](../Data-Structure/Data-Structure.md)

[Before](..) | [Next](..)

[Alt/rust](./Alt_rust/solution.rs) | [Alt/js](./Alt_js/solution.js) | [Alt/py3](./Alt_py3/solution.py) | [Alt/cpp](./Alt_cpp/solution.cpp) | [Alt/c](./Alt_c/solution.c)

Given a sequence of K integers { N​1 , N2​​ , …, N​K
​​ }. A continuous subsequence is defined to be { N​i , N​i+1​​ , …, N​j
​​ } where 1≤i≤j≤K. The Maximum Subsequence is the continuous subsequence which has the largest sum of its elements. For example, given sequence { -2, 11, -4, 13, -5, -2 }, its maximum subsequence is { 11, -4, 13 } with the largest sum being 20.

Now you are supposed to find the largest sum, together with the first and the last numbers of the maximum subsequence.

Input Specification:

Each input file contains one test case. Each case occupies two lines. The first line contains a positive integer K (≤10000). The second line contains K numbers, separated by a space.

Output Specification:

For each test case, output in one line the largest sum, together with the first and the last numbers of the maximum subsequence. The numbers must be separated by one space, but there must be no extra space at the end of a line. In case that the maximum subsequence is not unique, output the one with the smallest indices i and j (as shown by the sample case). If all the K numbers are negative, then its maximum sum is defined to be 0, and you are supposed to output the first and the last numbers of the whole sequence.

**Example**

Input

```
10
-10 1 2 3 4 -5 -23 3 7 -21

```

Output

```
10 1 4

```


### javascript solutions

-   [solution1.js](Alt_js/p8_MaxSubseqSum1.js)
-   [solution2.js](Alt_js/p8_MaxSubseqSum2.js)
-   [solution3.js](Alt_js/p9_MaxSubseqSum3.js)
-   [solution4.js](Alt_js/p10_MaxSubseqSum4.js)

### c solutions

-   [solution1.c](Alt_c/p8_MaxSubseqSum1.c)
-   [solution2.c](Alt_c/p8_MaxSubseqSum2.c)
-   [solution3.c](Alt_c/p9_MaxSubseqSum3.c)
-   [solution4.c](Alt_c/p10_MaxSubseqSum4.c)