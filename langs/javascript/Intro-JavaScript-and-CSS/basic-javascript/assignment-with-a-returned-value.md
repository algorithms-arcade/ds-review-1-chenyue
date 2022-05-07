---
layout: home
title: Assignment with a Returned Value
challengeType: 1
videoUrl: 'https://scrimba.com/c/ce2pEtB'
forumTopicId: 16658
dashedName: assignment-with-a-returned-value
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./understanding-undefined-value-returned-from-a-function.md)  | [Next](./stand-in-line.md) 

If you'll recall from our discussion of [Storing Values with the Assignment Operator](/learn/javascript-algorithms-and-data-structures/basic-javascript/storing-values-with-the-assignment-operator), everything to the right of the equal sign is resolved before the value is assigned. This means we can take the return value of a function and assign it to a variable.

Assume we have pre-defined a function `sum` which adds two numbers together, then:

```js
ourSum = sum(5, 12);
```

will call the `sum` function, which returns a value of `17` and assigns it to the `ourSum` variable.

##  instructions 

Call the `processArg` function with an argument of `7` and assign its return value to the variable `processed`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative assignment-with-a-returned-value.js %}

{% endhighlight %}

</div>
</div>


