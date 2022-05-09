---
layout: home
title: Generate Random Whole Numbers within a Range
challengeType: 1
videoUrl: 'https://scrimba.com/c/cm83yu6'
forumTopicId: 18187
dashedName: generate-random-whole-numbers-within-a-range
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./generate-random-whole-numbers-with-javascript.md)  | [Next](./use-the-parseint-function.md) 

Instead of generating a random whole number between zero and a given number like we did before, we can generate a random whole number that falls within a range of two specific numbers.

To do this, we'll define a minimum number `min` and a maximum number `max`.

Here's the formula we'll use. Take a moment to read it and try to understand what this code is doing:

```js
Math.floor(Math.random() * (max - min + 1)) + min
```

##  instructions 

Create a function called `randomRange` that takes a range `myMin` and `myMax` and returns a random whole number that's greater than or equal to `myMin`, and is less than or equal to `myMax`, inclusive.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative generate-random-whole-numbers-within-a-range.js %}

{% endhighlight %}

</div>
</div>


