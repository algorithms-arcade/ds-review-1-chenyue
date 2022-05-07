---
layout: home
title: Use the parseInt Function
challengeType: 1
videoUrl: 'https://scrimba.com/c/cm83LSW'
forumTopicId: 301183
dashedName: use-the-parseint-function
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./generate-random-whole-numbers-within-a-range.md)  | [Next](./use-the-parseint-function-with-a-radix.md) 

The `parseInt()` function parses a string and returns an integer. Here's an example:

```js
const a = parseInt("007");
```

The above function converts the string `007` to the integer `7`. If the first character in the string can't be converted into a number, then it returns `NaN`.

##  instructions 

Use `parseInt()` in the `convertToInteger` function so it converts the input string `str` into an integer, and returns it.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative use-the-parseint-function.js %}

{% endhighlight %}

</div>
</div>

