---
layout: home
title: Catch Misspelled Variable and Function Names
challengeType: 1
forumTopicId: 301186
dashedName: catch-misspelled-variable-and-function-names
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Debugging](README.html)

[Before](./use-typeof-to-check-the-type-of-a-variable.md)  | [Next](./catch-unclosed-parentheses-brackets-braces-and-quotes.md)

The `console.log()` and `typeof` methods are the two primary ways to check intermediate values and types of program output. Now it's time to get into the common forms that bugs take. One syntax-level issue that fast typers can commiserate with is the humble spelling error.

Transposed, missing, or mis-capitalized characters in a variable or function name will have the browser looking for an object that doesn't exist - and complain in the form of a reference error. JavaScript variable and function names are case-sensitive.

## Instructions 

Fix the two spelling errors in the code so the `netWorkingCapital` calculation works.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative catch-misspelled-variable-and-function-names.js %}

{% endhighlight %}

</div>
</div>

