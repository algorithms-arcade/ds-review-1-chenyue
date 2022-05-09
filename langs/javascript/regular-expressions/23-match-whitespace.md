---
layout: home
title: 23. Match Whitespace
challengeType: 1
forumTopicId: 301359
dashedName: match-whitespace
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./22-restrict-possible-usernames.md)  | [Next](./24-match-non-whitespace-characters.md) 

The challenges so far have covered matching letters of the alphabet and numbers. You can also match the whitespace or spaces between letters.

You can search for whitespace using `\s`, which is a lowercase `s`. This pattern not only matches whitespace, but also carriage return, tab, form feed, and new line characters. You can think of it as similar to the character class `[ \r\t\f\n\v]`.

```js
let whiteSpace = "Whitespace. Whitespace everywhere!"
let spaceRegex = /\s/g;
whiteSpace.match(spaceRegex);
```

This `match` call would return `[" ", " "]`.
## Instructions 

Change the regex `countWhiteSpace` to look for multiple whitespace characters in a string.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 23-match-whitespace.js %}

{% endhighlight %}

</div>
</div>