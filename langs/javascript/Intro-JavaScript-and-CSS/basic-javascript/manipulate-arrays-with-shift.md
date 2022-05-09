---
layout: home
title: Manipulate Arrays With shift()
challengeType: 1
videoUrl: 'https://scrimba.com/c/cRbVETW'
forumTopicId: 18238
dashedName: manipulate-arrays-with-shift
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./manipulate-arrays-with-pop.md)  | [Next](./manipulate-arrays-with-unshift.md) 

`pop()` always removes the last element of an array. What if you want to remove the first?

That's where `.shift()` comes in. It works just like `.pop()`, except it removes the first element instead of the last.

Example:

```js
const ourArray = ["Stimpson", "J", ["cat"]];
const removedFromOurArray = ourArray.shift();
```

`removedFromOurArray` would have a value of the string `Stimpson`, and `ourArray` would have `["J", ["cat"]]`.

##  instructions 

Use the `.shift()` function to remove the first item from `myArray` and assign the "shifted off" value to a new variable, `removedFromMyArray`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative manipulate-arrays-with-shift.js %}

{% endhighlight %}

</div>
</div>

