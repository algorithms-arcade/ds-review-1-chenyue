---
layout: home
title: 05. Extract Matches
challengeType: 1
forumTopicId: 301340
dashedName: extract-matches
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Before](./04-ignore-case-while-matching.md)  | [Next](./06-find-more-than-the-first-match.md) 

So far, you have only been checking if a pattern exists or not within a string. You can also extract the actual matches you found with the `.match()` method.

To use the `.match()` method, apply the method on a string and pass in the regex inside the parentheses.

Here's an example:

```js
"Hello, World!".match(/Hello/);
let ourStr = "Regular expressions";
let ourRegex = /expressions/;
ourStr.match(ourRegex);
```

Here the first `match` would return `["Hello"]` and the second would return `["expressions"]`.

Note that the `.match` syntax is the "opposite" of the `.test` method you have been using thus far:

```js
'string'.match(/regex/);
/regex/.test('string');
```

## Instructions 

Apply the `.match()` method to extract the string `coding`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 05-extract-matches.js %}

{% endhighlight %}

</div>
</div>
