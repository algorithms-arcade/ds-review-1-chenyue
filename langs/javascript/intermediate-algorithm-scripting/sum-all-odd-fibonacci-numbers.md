---
layout: home
title: Sum All Odd Fibonacci Numbers
challengeType: 5
forumTopicId: 16084
dashedName: sum-all-odd-fibonacci-numbers
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Intermediate Algorithm Scripting](../intermediate-algorithm-scripting/README.html) 

[Before](./convert-html-entities.md)  | [Next](./sum-all-primes.md) 

Given a positive integer `num`, return the sum of all odd Fibonacci numbers that are less than or equal to `num`.

The first two numbers in the Fibonacci sequence are 1 and 1. Every additional number in the sequence is the sum of the two previous numbers. The first six numbers of the Fibonacci sequence are 1, 1, 2, 3, 5 and 8.

For example, `sumFibs(10)` should return `10` because all odd Fibonacci numbers less than or equal to `10` are 1, 1, 3, and 5.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative sum-all-odd-fibonacci-numbers.js %}

{% endhighlight %}

</div>
</div>

