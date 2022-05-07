---
layout: home
title: 06. Find More Than the First Match
challengeType: 1
forumTopicId: 301342
dashedName: find-more-than-the-first-match
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./05-extract-matches.md)  | [Next](./07-match-anything-with-wildcard-period.md) 

So far, you have only been able to extract or search a pattern once.

```js
let testStr = "Repeat, Repeat, Repeat";
let ourRegex = /Repeat/;
testStr.match(ourRegex);
```

Here `match` would return `["Repeat"]`.

To search or extract a pattern more than once, you can use the `g` flag.

```js
let repeatRegex = /Repeat/g;
testStr.match(repeatRegex);
```

And here `match` returns the value `["Repeat", "Repeat", "Repeat"]`

## Instructions 

Using the regex `starRegex`, find and extract both `Twinkle` words from the string `twinkleStar`.

**Note**  
You can have multiple flags on your regex like `/search/gi`

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 06-find-more-than-the-first-match.js %}

{% endhighlight %}

</div>
</div>
