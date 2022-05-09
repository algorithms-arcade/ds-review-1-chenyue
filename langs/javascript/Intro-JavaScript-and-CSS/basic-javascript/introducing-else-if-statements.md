---
layout: home
title: Introducing Else If Statements
challengeType: 1
videoUrl: 'https://scrimba.com/c/caeJ2hm'
forumTopicId: 18206
dashedName: introducing-else-if-statements
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./introducing-else-statements.md)  | [Next](./logical-order-in-if-else-statements.md) 

If you have multiple conditions that need to be addressed, you can chain `if` statements together with `else if` statements.

```js
if (num > 15) {
  return "Bigger than 15";
} else if (num < 5) {
  return "Smaller than 5";
} else {
  return "Between 5 and 15";
}
```

##  instructions 

Convert the logic to use `else if` statements.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative introducing-else-if-statements.js %}

{% endhighlight %}

</div>
</div>
