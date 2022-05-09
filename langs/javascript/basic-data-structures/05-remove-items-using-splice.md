---
layout: home
title: 05. Remove Items Using splice()
challengeType: 1
forumTopicId: 301166
dashedName: remove-items-using-splice
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Basic Data Structures](../basic-data-structures/README.md)

[Before](./04-remove-items-from-an-array-with-pop-and-shift.md)  | [Next](./06-add-items-using-splice.md)


Ok, so we've learned how to remove elements from the beginning and end of arrays using `shift()` and `pop()`, but what if we want to remove an element from somewhere in the middle? Or remove more than one element at once? Well, that's where `splice()` comes in. `splice()` allows us to do just that: **remove any number of consecutive elements** from anywhere in an array.

`splice()` can take up to 3 parameters, but for now, we'll focus on just the first 2. The first two parameters of `splice()` are integers which represent indexes, or positions, of items in the array that `splice()` is being called upon. And remember, arrays are *zero-indexed*, so to indicate the first element of an array, we would use `0`. `splice()`'s first parameter represents the index on the array from which to begin removing elements, while the second parameter indicates the number of elements to delete. For example:

```js
let array = ['today', 'was', 'not', 'so', 'great'];

array.splice(2, 2);
```

Here we remove 2 elements, beginning with the third element (at index 2). `array` would have the value `['today', 'was', 'great']`.

`splice()` not only modifies the array it's being called on, but it also returns a new array containing the value of the removed elements:

```js
let array = ['I', 'am', 'feeling', 'really', 'happy'];

let newArray = array.splice(3, 2);
```

`newArray` has the value `['really', 'happy']`.

##  instructions 

We've initialized an array `arr`. Use `splice()` to remove elements from `arr`, so that it only contains elements that sum to the value of `10`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 05-remove-items-using-splice.js %}

{% endhighlight %}

</div>
</div>

