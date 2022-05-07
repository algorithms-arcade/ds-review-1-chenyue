---
layout: home
title: 18. Return a Sorted Array Without Changing the Original Array
challengeType: 1
forumTopicId: 301237
dashedName: return-a-sorted-array-without-changing-the-original-array
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home -  Functional Programming](./README.md) 

[Before](./17-sort-an-array-alphabetically-using-the-sort-method.md)  | [Next](./19-split-a-string-into-an-array-using-the-split-method.md) 

A side effect of the `sort` method is that it changes the order of the elements in the original array. In other words, it mutates the array in place. One way to avoid this is to first concatenate an empty array to the one being sorted (remember that `slice` and `concat` return a new array), then run the `sort` method.

##  Instructions 

Use the `sort` method in the `nonMutatingSort` function to sort the elements of an array in ascending order. The function should return a new array, and not mutate the `globalArray` variable.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 18-return-a-sorted-array-without-changing-the-original-array.js %}

{% endhighlight %}

</div>
</div>

