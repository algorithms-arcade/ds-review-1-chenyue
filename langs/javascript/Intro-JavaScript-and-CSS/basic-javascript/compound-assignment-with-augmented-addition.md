---
layout: home
title: Compound Assignment With Augmented Addition
challengeType: 1
videoUrl: 'https://scrimba.com/c/cDR6LCb'
forumTopicId: 16661
dashedName: compound-assignment-with-augmented-addition
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./finding-a-remainder-in-javascript.md)  | [Next](./compound-assignment-with-augmented-subtraction.md) 

In programming, it is common to use assignments to modify the contents of a variable. Remember that everything to the right of the equals sign is evaluated first, so we can say:

```js
myVar = myVar + 5;
```

to add `5` to `myVar`. Since this is such a common pattern, there are operators which do both a mathematical operation and assignment in one step.

One such operator is the `+=` operator.

```js
let myVar = 1;
myVar += 5;
console.log(myVar);
```

`6` would be displayed in the console.

##  instructions 

Convert the assignments for `a`, `b`, and `c` to use the `+=` operator.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative compound-assignment-with-augmented-addition.js %}

{% endhighlight %}

</div>
</div>
