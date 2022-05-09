---
layout: home
title: 10. Check For The Presence of an Element With indexOf()
challengeType: 1
forumTopicId: 301154
dashedName: check-for-the-presence-of-an-element-with-indexof
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Basic Data Structures](../basic-data-structures/README.md)

[Before](./09-combine-arrays-with-the-spread-operator.md)  | [Next](./11-iterate-through-all-an-arrays-items-using-for-loops.md)

Since arrays can be changed, or *mutated*, at any time, there's no guarantee about where a particular piece of data will be on a given array, or if that element even still exists. Luckily, JavaScript provides us with another built-in method, `indexOf()`, that allows us to quickly and easily check for the presence of an element on an array. `indexOf()` takes an element as a parameter, and when called, it returns the position, or index, of that element, or `-1` if the element does not exist on the array.

For example:

```js
let fruits = ['apples', 'pears', 'oranges', 'peaches', 'pears'];

fruits.indexOf('dates');
fruits.indexOf('oranges');
fruits.indexOf('pears');
```

`indexOf('dates')` returns `-1`, `indexOf('oranges')` returns `2`, and `indexOf('pears')` returns `1` (the first index at which each element exists).

##  instructions 

`indexOf()` can be incredibly useful for quickly checking for the presence of an element on an array. We have defined a function, `quickCheck`, that takes an array and an element as arguments. Modify the function using `indexOf()` so that it returns `true` if the passed element exists on the array, and `false` if it does not.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 10-check-for-the-presence-of-an-element-with-indexof.js %}

{% endhighlight %}

</div>
</div>


