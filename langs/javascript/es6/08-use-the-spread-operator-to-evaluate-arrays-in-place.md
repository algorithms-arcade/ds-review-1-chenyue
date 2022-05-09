---
layout: home 
title: 08. Use the Spread Operator to Evaluate Arrays In-Place
challengeType: 1
forumTopicId: 301222
dashedName: use-the-spread-operator-to-evaluate-arrays-in-place
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./07-use-the-rest-parameter-with-function-parameters.md)  | [Next](./09-use-destructuring-assignment-to-extract-values-from-objects.md)

ES6 introduces the <dfn>spread operator</dfn>, which allows us to expand arrays and other expressions in places where multiple parameters or elements are expected.

The ES5 code below uses `apply()` to compute the maximum value in an array:

```js
var arr = [6, 89, 3, 45];
var maximus = Math.max.apply(null, arr);
```

`maximus` would have a value of `89`.

We had to use `Math.max.apply(null, arr)` because `Math.max(arr)` returns `NaN`. `Math.max()` expects comma-separated arguments, but not an array. The spread operator makes this syntax much better to read and maintain.

```js
const arr = [6, 89, 3, 45];
const maximus = Math.max(...arr);
```

`maximus` would have a value of `89`.

`...arr` returns an unpacked array. In other words, it *spreads* the array. However, the spread operator only works in-place, like in an argument to a function or in an array literal. The following code will not work:

```js
const spreaded = ...arr;
```

##  Instructions 

Copy all contents of `arr1` into another array `arr2` using the spread operator.


</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 08-use-the-spread-operator-to-evaluate-arrays-in-place.js %}

{% endhighlight %}

</div>
</div>


