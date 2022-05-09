---
layout: home
title: Escaping Literal Quotes in Strings
challengeType: 1
videoUrl: 'https://scrimba.com/c/c2QvgSr'
forumTopicId: 17568
dashedName: escaping-literal-quotes-in-strings
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./compound-assignment-with-augmented-division.md)  | [Next](./quoting-strings-with-single-quotes.md) 

When you are defining a string you must start and end with a single or double quote. What happens when you need a literal quote: `"` or `'` inside of your string?

In JavaScript, you can <dfn>escape</dfn> a quote from considering it as an end of string quote by placing a <dfn>backslash</dfn> (`\`) in front of the quote.

```js
const sampleStr = "Alan said, \"Peter is learning JavaScript\".";
```

This signals to JavaScript that the following quote is not the end of the string, but should instead appear inside the string. So if you were to print this to the console, you would get:

```js
Alan said, "Peter is learning JavaScript".
```

##  instructions 

Use <dfn>backslashes</dfn> to assign a string to the `myStr` variable so that if you were to print it to the console, you would see:

```js
I am a "double quoted" string inside "double quotes".
```

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative escaping-literal-quotes-in-strings.js %}

{% endhighlight %}

</div>
</div>

