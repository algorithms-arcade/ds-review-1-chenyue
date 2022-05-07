---
layout: home
title: 'Catch Unclosed Parentheses, Brackets, Braces and Quotes'
challengeType: 1
forumTopicId: 301190
dashedName: catch-unclosed-parentheses-brackets-braces-and-quotes
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Debugging](README.html)

[Before](./catch-misspelled-variable-and-function-names.md)  | [Next](./catch-mixed-usage-of-single-and-double-quotes.md)

Another syntax error to be aware of is that all opening parentheses, brackets, curly braces, and quotes have a closing pair. Forgetting a piece tends to happen when you're editing existing code and inserting items with one of the pair types. Also, take care when nesting code blocks into others, such as adding a callback function as an argument to a method.

One way to avoid this mistake is as soon as the opening character is typed, immediately include the closing match, then move the cursor back between them and continue coding. Fortunately, most modern code editors generate the second half of the pair automatically.

## Instructions 

Fix the two pair errors in the code.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative catch-unclosed-parentheses-brackets-braces-and-quotes.js %}

{% endhighlight %}

</div>
</div>

