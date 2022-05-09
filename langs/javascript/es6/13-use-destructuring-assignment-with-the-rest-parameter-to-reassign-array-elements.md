---
layout: home 
title: 13. Use Destructuring Assignment with the Rest Parameter to Reassign Array
  Elements
challengeType: 1
forumTopicId: 301218
dashedName: >-
  use-destructuring-assignment-with-the-rest-parameter-to-reassign-array-elements
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./12-use-destructuring-assignment-to-assign-variables-from-arrays.md)  | [Next](./14-use-destructuring-assignment-to-pass-an-object-as-a-functions-parameters.md)

In some situations involving array destructuring, we might want to collect the rest of the elements into a separate array.

The result is similar to `Array.prototype.slice()`, as shown below:

```js
const [a, b, ...arr] = [1, 2, 3, 4, 5, 7];
console.log(a, b);
console.log(arr);
```

The console would display the values `1, 2` and `[3, 4, 5, 7]`.

Variables `a` and `b` take the first and second values from the array. After that, because of the rest parameter's presence, `arr` gets the rest of the values in the form of an array. The rest element only works correctly as the last variable in the list. As in, you cannot use the rest parameter to catch a subarray that leaves out the last element of the original array.

##  Instructions 

Use destructuring assignment with the rest parameter to perform an effective `Array.prototype.slice()` so that `arr` is a sub-array of the original array `source` with the first two elements omitted.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 13-use-destructuring-assignment-with-the-rest-parameter-to-reassign-array-elements.js %}

{% endhighlight %}

</div>
</div>

