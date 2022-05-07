---
layout: home
title: Iterate Odd Numbers With a For Loop
challengeType: 1
videoUrl: 'https://scrimba.com/c/cm8n7T9'
forumTopicId: 18212
dashedName: iterate-odd-numbers-with-a-for-loop
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./iterate-with-javascript-for-loops.md)  | [Next](./count-backwards-with-a-for-loop.md) 

For loops don't have to iterate one at a time. By changing our `final-expression`, we can count by even numbers.

We'll start at `i = 0` and loop while `i < 10`. We'll increment `i` by 2 each loop with `i += 2`.

```js
const ourArray = [];

for (let i = 0; i < 10; i += 2) {
  ourArray.push(i);
}
```

`ourArray` will now contain `[0, 2, 4, 6, 8]`. Let's change our `initialization` so we can count by odd numbers.

##  instructions 

Push the odd numbers from 1 through 9 to `myArray` using a `for` loop.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative introducing-else-statements.js %}

{% endhighlight %}

</div>
</div>

