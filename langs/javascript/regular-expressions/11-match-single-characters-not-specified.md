---
layout: home
title: 11. Match Single Characters Not Specified
challengeType: 1
forumTopicId: 301358
dashedName: match-single-characters-not-specified
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./10-match-numbers-and-letters-of-the-alphabet.md)  | [Next](./12-match-characters-that-occur-one-or-more-times.md) 

So far, you have created a set of characters that you want to match, but you could also create a set of characters that you do not want to match. These types of character sets are called <dfn>negated character sets</dfn>.

To create a negated character set, you place a caret character (`^`) after the opening bracket and before the characters you do not want to match.

For example, `/[^aeiou]/gi` matches all characters that are not a vowel. Note that characters like `.`, `!`, `[`, `@`, `/` and white space are matched - the negated vowel character set only excludes the vowel characters.

## Instructions 

Create a single regex that matches all characters that are not a number or a vowel. Remember to include the appropriate flags in the regex.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 11-match-single-characters-not-specified.js %}

{% endhighlight %}

</div>
</div>