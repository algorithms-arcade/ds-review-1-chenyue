---
layout: home
title: Return Early Pattern for Functions
challengeType: 1
videoUrl: 'https://scrimba.com/c/cQe39Sq'
forumTopicId: 18272
dashedName: return-early-pattern-for-functions
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./returning-boolean-values-from-functions.md)  | [Next](./counting-cards.md) 

When a `return` statement is reached, the execution of the current function stops and control returns to the calling location.

**Example**

```js
function myFun() {
  console.log("Hello");
  return "World";
  console.log("byebye")
}
myFun();
```

The above will display the string `Hello` in the console, and return the string `World`. The string `byebye` will never display in the console, because the function exits at the `return` statement.

##  instructions 

Modify the function `abTest` so that if `a` or `b` are less than `0` the function will immediately exit with a value of `undefined`.

**Hint**  
Remember that [`undefined` is a keyword](https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/basic-javascript/understanding-uninitialized-variables), not a string.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative return-early-pattern-for-functions.js %}

{% endhighlight %}

</div>
</div>

