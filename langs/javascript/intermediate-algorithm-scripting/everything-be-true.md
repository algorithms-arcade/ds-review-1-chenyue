---
layout: home
title: Everything Be True
challengeType: 5
forumTopicId: 16011
dashedName: everything-be-true
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Intermediate Algorithm Scripting](../intermediate-algorithm-scripting/README.html) 

[Before](./binary-agents.md)  | [Next](./arguments-optional.md) 

Check if the predicate (second argument) is <dfn>truthy</dfn> on all elements of a collection (first argument).

In other words, you are given an array collection of objects. The predicate `pre` will be an object property and you need to return `true` if its value is `truthy`. Otherwise, return `false`.

In JavaScript, `truthy` values are values that translate to `true` when evaluated in a Boolean context.

Remember, you can access object properties through either dot notation or `[]` notation.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative everything-be-true.js %}

{% endhighlight %}

</div>
</div>


