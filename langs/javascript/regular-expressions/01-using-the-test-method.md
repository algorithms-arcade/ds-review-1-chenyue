---
layout: home
title: 01. Using the Test Method
challengeType: 1
forumTopicId: 301369
dashedName: using-the-test-method
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Regular Expressions](./README.md)

[Home - Regular Expressions](../regular-expressions/README.md)  | [Next](./02-match-literal-strings.md) 

Regular expressions are used in programming languages to match parts of strings. You create patterns to help you do that matching.

If you want to find the word `the` in the string `The dog chased the cat`, you could use the following regular expression: `/the/`. Notice that quote marks are not required within the regular expression.

JavaScript has multiple ways to use regexes. One way to test a regex is using the `.test()` method. The `.test()` method takes the regex, applies it to a string (which is placed inside the parentheses), and returns `true` or `false` if your pattern finds something or not.

```js
let testStr = "freeCodeCamp";
let testRegex = /Code/;
testRegex.test(testStr);
```

The `test` method here returns `true`.

## Instructions 
----
Apply the regex `myRegex` on the string `myString` using the `.test()` method.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 01-using-the-test-method.js %}

{% endhighlight %}

</div>
</div>

