---
layout: home
title: Use Caution When Reinitializing Variables Inside a Loop
challengeType: 1
forumTopicId: 301194
dashedName: use-caution-when-reinitializing-variables-inside-a-loop
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Debugging](README.html)

[Before](./catch-off-by-one-errors-when-using-indexing.md)  | [Next](./prevent-infinite-loops-with-a-valid-terminal-condition.md)

Sometimes it's necessary to save information, increment counters, or re-set variables within a loop. A potential issue is when variables either should be reinitialized, and aren't, or vice versa. This is particularly dangerous if you accidentally reset the variable being used for the terminal condition, causing an infinite loop.

Printing variable values with each cycle of your loop by using `console.log()` can uncover buggy behavior related to resetting, or failing to reset a variable.

## Instructions 

The following function is supposed to create a two-dimensional array with `m` rows and `n` columns of zeroes. Unfortunately, it's not producing the expected output because the `row` variable isn't being reinitialized (set back to an empty array) in the outer loop. Fix the code so it returns a correct 3x2 array of zeroes, which looks like `[[0, 0], [0, 0], [0, 0]]`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative use-caution-when-reinitializing-variables-inside-a-loop.js %}

{% endhighlight %}

</div>
</div>

