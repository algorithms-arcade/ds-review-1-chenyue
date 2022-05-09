---
layout: home
title: Comparison with the Strict Equality Operator
challengeType: 1
videoUrl: 'https://scrimba.com/c/cy87atr'
forumTopicId: 16790
dashedName: comparison-with-the-strict-equality-operator
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./comparison-with-the-equality-operator.md)  | [Next](./practice-comparing-different-values.md) 

Strict equality (`===`) is the counterpart to the equality operator (`==`). However, unlike the equality operator, which attempts to convert both values being compared to a common type, the strict equality operator does not perform a type conversion.

If the values being compared have different types, they are considered unequal, and the strict equality operator will return false.

**Examples**

```js
3 ===  3  // true
3 === '3' // false
```

In the second example, `3` is a `Number` type and `'3'` is a `String` type.

##  instructions 

Use the strict equality operator in the `if` statement so the function will return the string `Equal` when `val` is strictly equal to `7`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative comparison-with-the-strict-equality-operator.js %}

{% endhighlight %}

</div>
</div>

