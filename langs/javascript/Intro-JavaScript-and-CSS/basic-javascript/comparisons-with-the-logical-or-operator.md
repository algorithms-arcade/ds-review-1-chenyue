---
layout: home
title: Comparisons with the Logical Or Operator
challengeType: 1
videoUrl: 'https://scrimba.com/c/cEPrGTN'
forumTopicId: 16800
dashedName: comparisons-with-the-logical-or-operator
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./comparisons-with-the-logical-and-operator.md)  | [Next](./introducing-else-statements.md) 

The <dfn>logical or</dfn> operator (`||`) returns `true` if either of the <dfn>operands</dfn> is `true`. Otherwise, it returns `false`.

The <dfn>logical or</dfn> operator is composed of two pipe symbols: (`||`). This can typically be found between your Backspace and Enter keys.

The pattern below should look familiar from prior waypoints:

```js
if (num > 10) {
  return "No";
}
if (num < 5) {
  return "No";
}
return "Yes";
```

will return `Yes` only if `num` is between `5` and `10` (5 and 10 included). The same logic can be written as:

```js
if (num > 10 || num < 5) {
  return "No";
}
return "Yes";
```

##  instructions 

Combine the two `if` statements into one statement which returns the string `Outside` if `val` is not between `10` and `20`, inclusive. Otherwise, return the string `Inside`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative comparisons-with-the-logical-or-operator.js %}

{% endhighlight %}

</div>
</div>
