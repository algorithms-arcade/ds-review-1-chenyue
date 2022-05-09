---
layout: home
title: 14. Find Characters with Lazy Matching
challengeType: 1
forumTopicId: 301341
dashedName: find-characters-with-lazy-matching
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./13-match-characters-that-occur-zero-or-more-times.md)  | [Next](./15-find-one-or-more-criminals-in-a-hunt.md) 

In regular expressions, a <dfn>greedy</dfn> match finds the longest possible part of a string that fits the regex pattern and returns it as a match. The alternative is called a <dfn>lazy</dfn> match, which finds the smallest possible part of the string that satisfies the regex pattern.

You can apply the regex `/t[a-z]*i/` to the string `"titanic"`. This regex is basically a pattern that starts with `t`, ends with `i`, and has some letters in between.

Regular expressions are by default greedy, so the match would return `["titani"]`. It finds the largest sub-string possible to fit the pattern.

However, you can use the `?` character to change it to lazy matching. `"titanic"` matched against the adjusted regex of `/t[a-z]*?i/` returns `["ti"]`.

**Note:** Parsing HTML with regular expressions should be avoided, but pattern matching an HTML string with regular expressions is completely fine.

## Instructions 

Fix the regex `/<.*>/` to return the HTML tag `<h1>` and not the text `"<h1>Winter is coming</h1>"`. Remember the wildcard `.` in a regular expression matches any character.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 14-find-characters-with-lazy-matching.js %}

{% endhighlight %}

</div>
</div>