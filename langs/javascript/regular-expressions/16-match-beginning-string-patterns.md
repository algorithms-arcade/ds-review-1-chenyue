---
layout: home
title: 16. Match Beginning String Patterns
challengeType: 1
forumTopicId: 301349
dashedName: match-beginning-string-patterns
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./15-find-one-or-more-criminals-in-a-hunt.md)  | [Next](./17-match-ending-string-patterns.md) 

Prior challenges showed that regular expressions can be used to look for a number of matches. They are also used to search for patterns in specific positions in strings.

In an earlier challenge, you used the caret character (`^`) inside a character set to create a negated character set in the form `[^thingsThatWillNotBeMatched]`. Outside of a character set, the caret is used to search for patterns at the beginning of strings.

```js
let firstString = "Ricky is first and can be found.";
let firstRegex = /^Ricky/;
firstRegex.test(firstString);
let notFirst = "You can't find Ricky now.";
firstRegex.test(notFirst);
```

The first `test` call would return `true`, while the second would return `false`.

## Instructions 

Use the caret character in a regex to find `Cal` only in the beginning of the string `rickyAndCal`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 16-match-beginning-string-patterns.js %}

{% endhighlight %}

</div>
</div>