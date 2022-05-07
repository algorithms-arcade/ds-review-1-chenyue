---
layout: home
title: 14. Add Elements to the End of an Array Using concat Instead of push
challengeType: 1
forumTopicId: 301226
dashedName: add-elements-to-the-end-of-an-array-using-concat-instead-of-push
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home -  Functional Programming](./README.md) 

[Before](./13-combine-two-arrays-using-the-concat-method.md)  | [Next](./15-use-the-reduce-method-to-analyze-data.md) 

Functional programming is all about creating and using non-mutating functions.

The last challenge introduced the `concat` method as a way to combine arrays into a new one without mutating the original arrays. Compare `concat` to the `push` method. `push` adds an item to the end of the same array it is called on, which mutates that array. Here's an example:

```js
var arr = [1, 2, 3];
arr.push([4, 5, 6]);
```

`arr` would have a modified value of `[1, 2, 3, [4, 5, 6]]`, which is not the functional programming way.

`concat` offers a way to add new items to the end of an array without any mutating side effects.

##  Instructions 

Change the `nonMutatingPush` function so it uses `concat` to add `newItem` to the end of `original` instead of `push`. The function should return an array.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 14-add-elements-to-the-end-of-an-array-using-concat-instead-of-push.js %}

{% endhighlight %}

</div>
</div>

