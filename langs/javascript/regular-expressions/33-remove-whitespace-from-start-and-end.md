---
layout: home
title: 33. Remove Whitespace from Start and End
challengeType: 1
forumTopicId: 301362
dashedName: remove-whitespace-from-start-and-end
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./32-use-capture-groups-to-search-and-replace.md)  | [Home - Regular Expressions](./README.md) 

Sometimes whitespace characters around strings are not wanted but are there. Typical processing of strings is to remove the whitespace at the start and end of it.

## instructions 

Write a regex and use the appropriate string methods to remove whitespace at the beginning and end of strings.

**Note:** The `String.prototype.trim()` method would work here, but you'll need to complete this challenge using regular expressions.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 33-remove-whitespace-from-start-and-end.js %}

{% endhighlight %}

</div>
</div>