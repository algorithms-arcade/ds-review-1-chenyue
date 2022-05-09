---
layout: home
title: Smallest Common Multiple
challengeType: 5
forumTopicId: 16075
dashedName: smallest-common-multiple
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Intermediate Algorithm Scripting](../intermediate-algorithm-scripting/README.html) 

[Before](./sum-all-primes.md)  | [Next](./drop-it.md) 

Find the smallest common multiple of the provided parameters that can be evenly divided by both, as well as by all sequential numbers in the range between these parameters.

The range will be an array of two numbers that will not necessarily be in numerical order.

For example, if given 1 and 3, find the smallest common multiple of both 1 and 3 that is also evenly divisible by all numbers *between* 1 and 3. The answer here would be 6.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative smallest-common-multiple.js %}

{% endhighlight %}

</div>
</div>

