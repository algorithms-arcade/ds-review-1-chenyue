---
layout: home
title: Return a Value from a Function with Return
challengeType: 1
videoUrl: 'https://scrimba.com/c/cy87wue'
forumTopicId: 18271
dashedName: return-a-value-from-a-function-with-return
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./passing-values-to-functions-with-arguments.md)  | [Next](./global-scope-and-functions.md) 

We can pass values into a function with <dfn>arguments</dfn>. You can use a `return` statement to send a value back out of a function.

**Example**

```js
function plusThree(num) {
  return num + 3;
}

const answer = plusThree(5);
```

`answer` has the value `8`.

`plusThree` takes an <dfn>argument</dfn> for `num` and returns a value equal to `num + 3`.

##  instructions 

Create a function `timesFive` that accepts one argument, multiplies it by `5`, and returns the new value.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative return-a-value-from-a-function-with-return.js %}

{% endhighlight %}

</div>
</div>

