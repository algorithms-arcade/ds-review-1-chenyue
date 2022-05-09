---
layout: home
title: 08. Implement map on a Prototype
challengeType: 1
forumTopicId: 301230
dashedName: implement-map-on-a-prototype
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home -  Functional Programming](./README.md) 

[Before](./07-use-the-map-method-to-extract-data-from-an-array.md)  | [Next](./09-use-the-filter-method-to-extract-data-from-an-array.md) 

As you have seen from applying `Array.prototype.map()`, or simply `map()` earlier, the `map` method returns an array of the same length as the one it was called on. It also doesn't alter the original array, as long as its callback function doesn't.

In other words, `map` is a pure function, and its output depends solely on its inputs. Plus, it takes another function as its argument.

You might learn a lot about the `map` method if you implement your own version of it. It is recommended you use a `for` loop or `Array.prototype.forEach()`.

##  Instructions 

Write your own `Array.prototype.myMap()`, which should behave exactly like `Array.prototype.map()`. You should not use the built-in `map` method. The `Array` instance can be accessed in the `myMap` method using `this`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 08-implement-map-on-a-prototype.js %}

{% endhighlight %}

</div>
</div>

