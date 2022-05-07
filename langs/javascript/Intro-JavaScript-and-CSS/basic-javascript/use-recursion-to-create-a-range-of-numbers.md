---
layout: home
title: Use Recursion to Create a Range of Numbers
challengeType: 1
forumTopicId: 301180
dashedName: use-recursion-to-create-a-range-of-numbers
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./use-recursion-to-create-a-countdown.md)  | [Basic JavaScript](../basic-javascript/README.html)

Continuing from the previous challenge, we provide you another opportunity to create a recursive function to solve a problem.

##  instructions 

We have defined a function named `rangeOfNumbers` with two parameters. The function should return an array of integers which begins with a number represented by the `startNum` parameter and ends with a number represented by the `endNum` parameter. The starting number will always be less than or equal to the ending number. Your function must use recursion by calling itself and not use loops of any kind. It should also work for cases where both `startNum` and `endNum` are the same.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative use-recursion-to-create-a-range-of-numbers.js %}

{% endhighlight %}

</div>
</div>


