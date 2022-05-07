---
layout: home
title: Comparisons with the Logical And Operator
challengeType: 1
videoUrl: 'https://scrimba.com/c/cvbRVtr'
forumTopicId: 16799
dashedName: comparisons-with-the-logical-and-operator
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./comparison-with-the-less-than-or-equal-to-operator.md)  | [Next](./comparisons-with-the-logical-or-operator.md) 

Sometimes you will need to test more than one thing at a time. The <dfn>logical and</dfn> operator (`&&`) returns `true` if and only if the <dfn>operands</dfn> to the left and right of it are true.

The same effect could be achieved by nesting an if statement inside another if:

```js
if (num > 5) {
  if (num < 10) {
    return "Yes";
  }
}
return "No";
```

will only return `Yes` if `num` is greater than `5` and less than `10`. The same logic can be written as:

```js
if (num > 5 && num < 10) {
  return "Yes";
}
return "No";
```

##  instructions 

Replace the two if statements with one statement, using the `&&` operator, which will return the string `Yes` if `val` is less than or equal to `50` and greater than or equal to `25`. Otherwise, will return the string `No`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative comparisons-with-the-logical-and-operator.js %}

{% endhighlight %}

</div>
</div>

