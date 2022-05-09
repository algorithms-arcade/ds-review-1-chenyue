---
layout: home
title: Escape Sequences in Strings
challengeType: 1
videoUrl: 'https://scrimba.com/c/cvmqRh6'
forumTopicId: 17567
dashedName: escape-sequences-in-strings
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./quoting-strings-with-single-quotes.md)  | [Next](./concatenating-strings-with-plus-operator.md) 

Quotes are not the only characters that can be <dfn>escaped</dfn> inside a string. There are two reasons to use escaping characters:

1.  To allow you to use characters you may not otherwise be able to type out, such as a carriage return.
2.  To allow you to represent multiple quotes in a string without JavaScript misinterpreting what you mean.

We learned this in the previous challenge.

<table class='table table-striped'><thead><tr><th>Code</th><th>Output</th></tr></thead><tbody><tr><td><code>\'</code></td><td>single quote</td></tr><tr><td><code>\"</code></td><td>double quote</td></tr><tr><td><code>\\</code></td><td>backslash</td></tr><tr><td><code>\n</code></td><td>newline</td></tr><tr><td><code>\r</code></td><td>carriage return</td></tr><tr><td><code>\t</code></td><td>tab</td></tr><tr><td><code>\b</code></td><td>word boundary</td></tr><tr><td><code>\f</code></td><td>form feed</td></tr></tbody></table>

*Note that the backslash itself must be escaped in order to display as a backslash.*

##  instructions 

Assign the following three lines of text into the single variable `myStr` using escape sequences.

<blockquote>FirstLine<br>    \SecondLine<br>ThirdLine</blockquote>

You will need to use escape sequences to insert special characters correctly. You will also need to follow the spacing as it looks above, with no spaces between escape sequences or words.

**Note:** The indentation for `SecondLine` is achieved with the tab escape character, not spaces.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative escape-sequences-in-strings.js %}

{% endhighlight %}

</div>
</div>

