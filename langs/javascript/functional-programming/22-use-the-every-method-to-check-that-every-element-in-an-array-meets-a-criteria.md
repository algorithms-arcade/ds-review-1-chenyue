---
layout: home
title: 22. Use the every Method to Check that Every Element in an Array Meets a Criteria
challengeType: 1
forumTopicId: 301312
dashedName: use-the-every-method-to-check-that-every-element-in-an-array-meets-a-criteria
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home -  Functional Programming](./README.md) 

[Before](./21-apply-functional-programming-to-convert-strings-to-url-slugs.md)  | [Next](./23-use-the-some-method-to-check-that-any-elements-in-an-array-meet-a-criteria.md) 

The `every` method works with arrays to check if *every* element passes a particular test. It returns a Boolean value - `true` if all values meet the criteria, `false` if not.

For example, the following code would check if every element in the `numbers` array is less than 10:

```js
var numbers = [1, 5, 8, 0, 10, 11];
numbers.every(function(currentValue) {
  return currentValue < 10;
});
```

The `every` method would return `false` here.

##  Instructions 

Use the `every` method inside the `checkPositive` function to check if every element in `arr` is positive. The function should return a Boolean value.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 22-use-the-every-method-to-check-that-every-element-in-an-array-meets-a-criteria.js %}

{% endhighlight %}

</div>
</div>

