---
layout: home
title: 24. Introduction to Currying and Partial Application
challengeType: 1
forumTopicId: 301232
dashedName: introduction-to-currying-and-partial-application
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home -  Functional Programming](./README.md) 

[Before](./23-use-the-some-method-to-check-that-any-elements-in-an-array-meet-a-criteria.md)  | [Home -  Functional Programming](./README.md) 

The <dfn>arity</dfn> of a function is the number of arguments it requires. <dfn>Currying</dfn> a function means to convert a function of N arity into N functions of arity 1.

In other words, it restructures a function so it takes one argument, then returns another function that takes the next argument, and so on.

Here's an example:

```js
function unCurried(x, y) {
  return x + y;
}

function curried(x) {
  return function(y) {
    return x + y;
  }
}

const curried = x => y => x + y

curried(1)(2)
```

`curried(1)(2)` would return `3`.

This is useful in your program if you can't supply all the arguments to a function at one time. You can save each function call into a variable, which will hold the returned function reference that takes the next argument when it's available. Here's an example using the curried function in the example above:

```js
var funcForY = curried(1);
console.log(funcForY(2)); // 3
```

Similarly, <dfn>partial application</dfn> can be described as applying a few arguments to a function at a time and returning another function that is applied to more arguments. Here's an example:

```js
function impartial(x, y, z) {
  return x + y + z;
}
var partialFn = impartial.bind(this, 1, 2);
partialFn(10); // 13
```

##  Instructions 

Fill in the body of the `add` function so it uses currying to add parameters `x`, `y`, and `z`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 24-introduction-to-currying-and-partial-application.js %}

{% endhighlight %}

</div>
</div>

