---
layout: home
title: 27. Specify Exact Number of Matches
challengeType: 1
forumTopicId: 301365
dashedName: specify-exact-number-of-matches
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./26-specify-only-the-lower-number-of-matches.md)  | [Next](./28-check-for-all-or-none.md) 

You can specify the lower and upper number of patterns with quantity specifiers using curly brackets. Sometimes you only want a specific number of matches.

To specify a certain number of patterns, just have that one number between the curly brackets.

For example, to match only the word `hah` with the letter `a` `3` times, your regex would be `/ha{3}h/`.

```js
let A4 = "haaaah";
let A3 = "haaah";
let A100 = "h" + "a".repeat(100) + "h";
let multipleHA = /ha{3}h/;
multipleHA.test(A4);
multipleHA.test(A3);
multipleHA.test(A100);
```

In order, the three `test` calls would return `false`, `true`, and `false`.

## Instructions 

Change the regex `timRegex` to match the word `Timber` only when it has four letter `m`'s.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 27-specify-exact-number-of-matches.js %}

{% endhighlight %}

</div>
</div>