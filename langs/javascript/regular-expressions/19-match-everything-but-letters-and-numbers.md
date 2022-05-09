---
layout: home
title: 19. Match Everything But Letters and Numbers
challengeType: 1
forumTopicId: 301353
dashedName: match-everything-but-letters-and-numbers
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./18-match-all-letters-and-numbers.md)  | [Next](./20-match-all-numbers.md) 

You've learned that you can use a shortcut to match alphanumerics `[A-Za-z0-9_]` using `\w`. A natural pattern you might want to search for is the opposite of alphanumerics.

You can search for the opposite of the `\w` with `\W`. Note, the opposite pattern uses a capital letter. This shortcut is the same as `[^A-Za-z0-9_]`.

```js
let shortHand = /\W/;
let numbers = "42%";
let sentence = "Coding!";
numbers.match(shortHand);
sentence.match(shortHand);
```

The first `match` call would return the value `["%"]` and the second would return `["!"]`.

## Instructions 

Use the shorthand character class `\W` to count the number of non-alphanumeric characters in various quotes and strings.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 19-match-everything-but-letters-and-numbers.js %}

{% endhighlight %}

</div>
</div>