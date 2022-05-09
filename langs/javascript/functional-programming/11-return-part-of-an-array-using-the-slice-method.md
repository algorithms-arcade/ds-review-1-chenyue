---
layout: home
title: 11. Return Part of an Array Using the slice Method
challengeType: 1
forumTopicId: 301239
dashedName: return-part-of-an-array-using-the-slice-method
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home -  Functional Programming](./README.md) 

[Before](./10-implement-the-filter-method-on-a-prototype.md)  | [Next](./12-remove-elements-from-an-array-using-slice-instead-of-splice.md) 

The `slice` method returns a copy of certain elements of an array. It can take two arguments, the first gives the index of where to begin the slice, the second is the index for where to end the slice (and it's non-inclusive). If the arguments are not provided, the default is to start at the beginning of the array through the end, which is an easy way to make a copy of the entire array. The `slice` method does not mutate the original array, but returns a new one.

Here's an example:

```js
var arr = ["Cat", "Dog", "Tiger", "Zebra"];
var newArray = arr.slice(1, 3);
```

`newArray` would have the value `["Dog", "Tiger"]`.

##  Instructions 

Use the `slice` method in the `sliceArray` function to return part of the `anim` array given the provided `beginSlice` and `endSlice` indices. The function should return an array.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 11-return-part-of-an-array-using-the-slice-method.js %}

{% endhighlight %}

</div>
</div>

