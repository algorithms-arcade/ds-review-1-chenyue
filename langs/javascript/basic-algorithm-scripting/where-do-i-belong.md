---
layout:  home
title: Where do I Belong
challengeType: 5
forumTopicId: 16094
dashedName: where-do-i-belong
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Basic Algorithm Scripting](../basic-algorithm-scripting/README.md) 

[Before](./falsy-bouncer.md)  | [Next](./mutations.md) 

Return the lowest index at which a value (second argument) should be inserted into an array (first argument) once it has been sorted. The returned value should be a number.

For example, `getIndexToIns([1,2,3,4], 1.5)` should return `1` because it is greater than `1` (index 0), but less than `2` (index 1).

Likewise, `getIndexToIns([20,3,5], 19)` should return `2` because once the array has been sorted it will look like `[3,5,20]` and `19` is less than `20` (index 2) and greater than `5` (index 1).

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative where-do-i-belong.js %}

{% endhighlight %}

</div>
</div>


