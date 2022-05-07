---
layout: home 
title: Palindrome Checker
challengeType: 5
forumTopicId: 16004
dashedName: palindrome-checker
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Algorithms and Data Structures Projects](./README.md)

[[Home - Algorithms and Data Structures Projects](./README.md)  | [Next](./roman-numeral-converter.md) 

Return `true` if the given string is a palindrome. Otherwise, return `false`.

A <dfn>palindrome</dfn> is a word or sentence that's spelled the same way both forward and backward, ignoring punctuation, case, and spacing.

**Note:** You'll need to remove **all non-alphanumeric characters** (punctuation, spaces and symbols) and turn everything into the same case (lower or upper case) in order to check for palindromes.

We'll pass strings with varying formats, such as `racecar`, `RaceCar`, and `race CAR` among others.

We'll also pass strings with special symbols, such as `2A3*3a2`, `2A3 3a2`, and `2_A3*3#A2`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative palindrome-checker.js %}

{% endhighlight %}

</div>
</div>

