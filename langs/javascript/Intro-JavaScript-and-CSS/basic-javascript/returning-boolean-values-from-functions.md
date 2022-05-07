---
layout: home
title: Returning Boolean Values from Functions
challengeType: 1
videoUrl: 'https://scrimba.com/c/cp62qAQ'
forumTopicId: 18273
dashedName: returning-boolean-values-from-functions
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./replacing-if-else-chains-with-switch.md)  | [Next](./return-early-pattern-for-functions.md) 

You may recall from [Comparison with the Equality Operator](/learn/javascript-algorithms-and-data-structures/basic-javascript/comparison-with-the-equality-operator) that all comparison operators return a boolean `true` or `false` value.

Sometimes people use an `if/else` statement to do a comparison, like this:

```js
function isEqual(a, b) {
  if (a === b) {
    return true;
  } else {
    return false;
  }
}
```

But there's a better way to do this. Since `===` returns `true` or `false`, we can return the result of the comparison:

```js
function isEqual(a, b) {
  return a === b;
}
```

##  instructions 

Fix the function `isLess` to remove the `if/else` statements.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative returning-boolean-values-from-functions.js %}

{% endhighlight %}

</div>
</div>

