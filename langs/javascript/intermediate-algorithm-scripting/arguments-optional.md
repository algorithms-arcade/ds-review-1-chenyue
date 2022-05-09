---
layout: home
title: Arguments Optional
challengeType: 5
forumTopicId: 14271
dashedName: arguments-optional
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Intermediate Algorithm Scripting](../intermediate-algorithm-scripting/README.html) 

[Before](./everything-be-true.md)  | [Next](./make-a-person.md) 

Create a function that sums two arguments together. If only one argument is provided, then return a function that expects one argument and returns the sum.

For example, `addTogether(2, 3)` should return `5`, and `addTogether(2)` should return a function.

Calling this returned function with a single argument will then return the sum:

```js
var sumTwoAnd = addTogether(2);
```

`sumTwoAnd(3)` returns `5`.

If either argument isn't a valid number, return undefined.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative arguments-optional.js %}

{% endhighlight %}

</div>
</div>
