---
layout: home
title: 21. Apply Functional Programming to Convert Strings to URL Slugs
challengeType: 1
forumTopicId: 301227
dashedName: apply-functional-programming-to-convert-strings-to-url-slugs
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home -  Functional Programming](./README.md) 

[Before](./20-combine-an-array-into-a-string-using-the-join-method.md)  | [Next](./22-use-the-every-method-to-check-that-every-element-in-an-array-meets-a-criteria.md) 

The last several challenges covered a number of useful array and string methods that follow functional programming principles. We've also learned about `reduce`, which is a powerful method used to reduce problems to simpler forms. From computing averages to sorting, any array operation can be achieved by applying it. Recall that `map` and `filter` are special cases of `reduce`.

Let's combine what we've learned to solve a practical problem.

Many content management sites (CMS) have the titles of a post added to part of the URL for simple bookmarking purposes. For example, if you write a Medium post titled `Stop Using Reduce`, it's likely the URL would have some form of the title string in it (`.../stop-using-reduce`). You may have already noticed this on the freeCodeCamp site.

##  Instructions 

Fill in the `urlSlug` function so it converts a string `title` and returns the hyphenated version for the URL. You can use any of the methods covered in this section, and don't use `replace`. Here are the requirements:

The input is a string with spaces and title-cased words

The output is a string with the spaces between words replaced by a hyphen (`-`)

The output should be all lower-cased letters

The output should not have any spaces

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 21-apply-functional-programming-to-convert-strings-to-url-slugs.js %}

{% endhighlight %}

</div>
</div>

