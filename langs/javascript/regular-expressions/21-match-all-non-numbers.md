---
layout: home
title: 21. Match All Non-Numbers
challengeType: 1
forumTopicId: 301347
dashedName: match-all-non-numbers
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./20-match-all-numbers.md)  | [Next](./22-restrict-possible-usernames.md) 

The last challenge showed how to search for digits using the shortcut `\d` with a lowercase `d`. You can also search for non-digits using a similar shortcut that uses an uppercase `D` instead.

The shortcut to look for non-digit characters is `\D`. This is equal to the character class `[^0-9]`, which looks for a single character that is not a number between zero and nine.

## Instructions 

Use the shorthand character class for non-digits `\D` to count how many non-digits are in movie titles.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 21-match-all-non-numbers.js %}

{% endhighlight %}

</div>
</div>