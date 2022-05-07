---
layout: home
title: 18. Match All Letters and Numbers
challengeType: 1
forumTopicId: 301346
dashedName: match-all-letters-and-numbers
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./17-match-ending-string-patterns.md)  | [Next](./19-match-everything-but-letters-and-numbers.md) 

Using character classes, you were able to search for all letters of the alphabet with `[a-z]`. This kind of character class is common enough that there is a shortcut for it, although it includes a few extra characters as well.

The closest character class in JavaScript to match the alphabet is `\w`. This shortcut is equal to `[A-Za-z0-9_]`. This character class matches upper and lowercase letters plus numbers. Note, this character class also includes the underscore character (`_`).

```js
let longHand = /[A-Za-z0-9_]+/;
let shortHand = /\w+/;
let numbers = "42";
let varNames = "important_var";
longHand.test(numbers);
shortHand.test(numbers);
longHand.test(varNames);
shortHand.test(varNames);
```

All four of these `test` calls would return `true`.

These shortcut character classes are also known as <dfn>shorthand character classes</dfn>.

## Instructions 

Use the shorthand character class `\w` to count the number of alphanumeric characters in various quotes and strings.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 18-match-all-letters-and-numbers.js %}

{% endhighlight %}

</div>
</div>