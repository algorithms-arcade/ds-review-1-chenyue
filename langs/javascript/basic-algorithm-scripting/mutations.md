---
layout:  home
title: Mutations
challengeType: 5
forumTopicId: 16025
dashedName: mutations
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic Algorithm Scripting](../basic-algorithm-scripting/README.md) 

[Before](./where-do-i-belong.md)  | [Next](./chunky-monkey.md) 

Return `true` if the string in the first element of the array contains all of the letters of the string in the second element of the array.

For example, `["hello", "Hello"]`, should return `true` because all of the letters in the second string are present in the first, ignoring case.

The arguments `["hello", "hey"]` should return `false` because the string `hello` does not contain a `y`.

Lastly, `["Alien", "line"]`, should return `true` because all of the letters in `line` are present in `Alien`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative mutations.js %}

{% endhighlight %}

</div>
</div>

