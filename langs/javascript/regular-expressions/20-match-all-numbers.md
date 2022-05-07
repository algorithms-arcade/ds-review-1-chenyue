---
layout: home
title: 20. Match All Numbers
challengeType: 1
forumTopicId: 18181
dashedName: match-all-numbers
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./19-match-everything-but-letters-and-numbers.md)  | [Next](./21-match-all-non-numbers.md) 

You've learned shortcuts for common string patterns like alphanumerics. Another common pattern is looking for just digits or numbers.

The shortcut to look for digit characters is `\d`, with a lowercase `d`. This is equal to the character class `[0-9]`, which looks for a single character of any number between zero and nine.

## Instructions 

Use the shorthand character class `\d` to count how many digits are in movie titles. Written out numbers ("six" instead of 6) do not count.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 20-match-all-numbers.js %}

{% endhighlight %}

</div>
</div>