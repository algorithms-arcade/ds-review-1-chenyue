---
layout: home
title: 03. Match a Literal String with Different Possibilities
challengeType: 1
forumTopicId: 301345
dashedName: match-a-literal-string-with-different-possibilities
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./02-match-literal-strings.md)  | [Next](./04-ignore-case-while-matching.md) 

Using regexes like `/coding/`, you can look for the pattern `coding` in another string.

This is powerful to search single strings, but it's limited to only one pattern. You can search for multiple patterns using the `alternation` or `OR` operator: `|`.

This operator matches patterns either before or after it. For example, if you wanted to match the strings `yes` or `no`, the regex you want is `/yes|no/`.

You can also search for more than just two patterns. You can do this by adding more patterns with more `OR` operators separating them, like `/yes|no|maybe/`.

## Instructions 

Complete the regex `petRegex` to match the pets `dog`, `cat`, `bird`, or `fish`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 03-match-a-literal-string-with-different-possibilities.js %}

{% endhighlight %}

</div>
</div>

