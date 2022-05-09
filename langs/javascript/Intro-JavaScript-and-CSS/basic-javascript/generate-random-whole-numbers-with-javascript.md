---
layout: home
title: Generate Random Whole Numbers with JavaScript
challengeType: 1
videoUrl: 'https://scrimba.com/c/cRn6bfr'
forumTopicId: 18186
dashedName: generate-random-whole-numbers-with-javascript
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./generate-random-fractions-with-javascript.md)  | [Next](./generate-random-whole-numbers-within-a-range.md) 

It's great that we can generate random decimal numbers, but it's even more useful if we use it to generate random whole numbers.

<ol><li>Use <code>Math.random()</code> to generate a random decimal.</li><li>Multiply that random decimal by <code>20</code>.</li><li>Use another function, <code>Math.floor()</code> to round the number down to its nearest whole number.</li></ol>

Remember that `Math.random()` can never quite return a `1` and, because we're rounding down, it's impossible to actually get `20`. This technique will give us a whole number between `0` and `19`.

Putting everything together, this is what our code looks like:

```js
Math.floor(Math.random() * 20);
```

We are calling `Math.random()`, multiplying the result by 20, then passing the value to `Math.floor()` function to round the value down to the nearest whole number.

##  instructions 

Use this technique to generate and return a random whole number between `0` and `9`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative generate-random-whole-numbers-with-javascript.js %}

{% endhighlight %}

</div>
</div>

