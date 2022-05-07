---
layout: home
title: Access Multi-Dimensional Arrays With Indexes
challengeType: 1
videoUrl: 'https://scrimba.com/c/ckND4Cq'
forumTopicId: 16159
dashedName: access-multi-dimensional-arrays-with-indexes
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md)  

[Before](./modify-array-data-with-indexes.md)  | [Next](./manipulate-arrays-with-push.md) 

One way to think of a <dfn>multi-dimensional</dfn> array, is as an *array of arrays*. When you use brackets to access your array, the first set of brackets refers to the entries in the outer-most (the first level) array, and each additional pair of brackets refers to the next level of entries inside.

**Example**

```js
const arr = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
  [[10, 11, 12], 13, 14]
];

arr[3];
arr[3][0];
arr[3][0][1];
```

`arr[3]` is `[[10, 11, 12], 13, 14]`, `arr[3][0]` is `[10, 11, 12]`, and `arr[3][0][1]` is `11`.

**Note:** There shouldn't be any spaces between the array name and the square brackets, like `array [0][0]` and even this `array [0] [0]` is not allowed. Although JavaScript is able to process this correctly, this may confuse other programmers reading your code.

##  instructions 

Using bracket notation select an element from `myArray` such that `myData` is equal to `8`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative access-multi-dimensional-arrays-with-indexes.js %}

{% endhighlight %}

</div>
</div>

