---
layout: home
title: Comparison with the Strict Inequality Operator
challengeType: 1
videoUrl: 'https://scrimba.com/c/cKekkUy'
forumTopicId: 16791
dashedName: comparison-with-the-strict-inequality-operator
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./comparison-with-the-inequality-operator.md)  | [Next](./comparison-with-the-greater-than-operator.md) 

The strict inequality operator (`!==`) is the logical opposite of the strict equality operator. It means "Strictly Not Equal" and returns `false` where strict equality would return `true` and *vice versa*. The strict inequality operator will not convert data types.

**Examples**

```js
3 !==  3  // false
3 !== '3' // true
4 !==  3  // true
```

##  instructions 

Add the strict inequality operator to the `if` statement so the function will return the string `Not Equal` when `val` is not strictly equal to `17`

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative comparison-with-the-strict-inequality-operator.js %}

{% endhighlight %}

</div>
</div>

