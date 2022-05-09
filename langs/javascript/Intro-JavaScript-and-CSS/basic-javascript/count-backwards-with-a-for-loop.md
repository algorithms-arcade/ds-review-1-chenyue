---
layout: home
title: Count Backwards With a For Loop
challengeType: 1
videoUrl: 'https://scrimba.com/c/c2R6BHa'
forumTopicId: 16808
dashedName: count-backwards-with-a-for-loop
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./iterate-odd-numbers-with-a-for-loop.md)  | [Next](./iterate-through-an-array-with-a-for-loop.md) 

A for loop can also count backwards, so long as we can define the right conditions.

In order to decrement by two each iteration, we'll need to change our initialization, condition, and final expression.

We'll start at `i = 10` and loop while `i > 0`. We'll decrement `i` by 2 each loop with `i -= 2`.

```js
const ourArray = [];

for (let i = 10; i > 0; i -= 2) {
  ourArray.push(i);
}
```

`ourArray` will now contain `[10, 8, 6, 4, 2]`. Let's change our initialization and final expression so we can count backwards by twos to create an array of descending odd numbers.

##  instructions 

Push the odd numbers from 9 through 1 to `myArray` using a `for` loop.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative count-backwards-with-a-for-loop.js %}

{% endhighlight %}

</div>
</div>
