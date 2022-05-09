---
layout: home
title: Manipulate Arrays With push()
challengeType: 1
videoUrl: 'https://scrimba.com/c/cnqmVtJ'
forumTopicId: 18237
dashedName: manipulate-arrays-with-push
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./access-multi-dimensional-arrays-with-indexes.md)  | [Next](./manipulate-arrays-with-pop.md) 

An easy way to append data to the end of an array is via the `push()` function.

`.push()` takes one or more <dfn>parameters</dfn> and "pushes" them onto the end of the array.

Examples:

```js
const arr1 = [1, 2, 3];
arr1.push(4);

const arr2 = ["Stimpson", "J", "cat"];
arr2.push(["happy", "joy"]);
```

`arr1` now has the value `[1, 2, 3, 4]` and `arr2` has the value `["Stimpson", "J", "cat", ["happy", "joy"]]`.

##  instructions 

Push `["dog", 3]` onto the end of the `myArray` variable.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative manipulate-arrays-with-push.js %}

{% endhighlight %}

</div>
</div>

