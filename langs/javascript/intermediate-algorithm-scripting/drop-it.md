---
layout: home
title: Drop it
challengeType: 5
forumTopicId: 16010
dashedName: drop-it
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Intermediate Algorithm Scripting](../intermediate-algorithm-scripting/README.html) 

[Before](./smallest-common-multiple.md)  | [Next](./steamroller.md) 

Given the array `arr`, iterate through and remove each element starting from the first element (the 0 index) until the function `func` returns `true` when the iterated element is passed through it.

Then return the rest of the array once the condition is satisfied, otherwise, `arr` should be returned as an empty array.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative drop-it.js %}

{% endhighlight %}

</div>
</div>

