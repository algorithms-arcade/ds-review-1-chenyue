---
layout: home
title: Comparison with the Inequality Operator
challengeType: 1
videoUrl: 'https://scrimba.com/c/cdBm9Sr'
forumTopicId: 16787
dashedName: comparison-with-the-inequality-operator
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./practice-comparing-different-values.md)  | [Next](./comparison-with-the-strict-inequality-operator.md) 

The inequality operator (`!=`) is the opposite of the equality operator. It means not equal and returns `false` where equality would return `true` and *vice versa*. Like the equality operator, the inequality operator will convert data types of values while comparing.

**Examples**

```js
1 !=  2    // true
1 != "1"   // false
1 != '1'   // false
1 != true  // false
0 != false // false
```

##  instructions 

Add the inequality operator `!=` in the `if` statement so that the function will return the string `Not Equal` when `val` is not equivalent to `99`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative comparison-with-the-inequality-operator.js %}

{% endhighlight %}

</div>
</div>

