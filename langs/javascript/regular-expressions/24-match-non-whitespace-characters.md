---
layout: home
title: 24. Match Non-Whitespace Characters
challengeType: 1
forumTopicId: 18210
dashedName: match-non-whitespace-characters
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./23-match-whitespace.md)  | [Next](./25-specify-upper-and-lower-number-of-matches.md) 

You learned about searching for whitespace using `\s`, with a lowercase `s`. You can also search for everything except whitespace.

Search for non-whitespace using `\S`, which is an uppercase `s`. This pattern will not match whitespace, carriage return, tab, form feed, and new line characters. You can think of it being similar to the character class `[^ \r\t\f\n\v]`.

```js
let whiteSpace = "Whitespace. Whitespace everywhere!"
let nonSpaceRegex = /\S/g;
whiteSpace.match(nonSpaceRegex).length;
```

The value returned by the `.length` method would be `32`.

## Instructions 

Change the regex `countNonWhiteSpace` to look for multiple non-whitespace characters in a string.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 24-match-non-whitespace-characters.js %}

{% endhighlight %}

</div>
</div>