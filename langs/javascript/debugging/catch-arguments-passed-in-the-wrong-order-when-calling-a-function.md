---
layout: home
title: Catch Arguments Passed in the Wrong Order When Calling a Function
challengeType: 1
forumTopicId: 301184
dashedName: catch-arguments-passed-in-the-wrong-order-when-calling-a-function
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Debugging](README.html)

[Before](./catch-missing-open-and-closing-parenthesis-after-a-function-call.md)  | [Next](./catch-off-by-one-errors-when-using-indexing.md)

Continuing the discussion on calling functions, the next bug to watch out for is when a function's arguments are supplied in the incorrect order. If the arguments are different types, such as a function expecting an array and an integer, this will likely throw a runtime error. If the arguments are the same type (all integers, for example), then the logic of the code won't make sense. Make sure to supply all required arguments, in the proper order to avoid these issues.

## Instructions 

The function `raiseToPower` raises a base to an exponent. Unfortunately, it's not called properly - fix the code so the value of `power` is the expected 8.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative catch-arguments-passed-in-the-wrong-order-when-calling-a-function.js %}

{% endhighlight %}

</div>
</div>


