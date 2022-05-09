---
layout: home
title: Pig Latin
challengeType: 5
forumTopicId: 16039
dashedName: pig-latin
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Intermediate Algorithm Scripting](../intermediate-algorithm-scripting/README.html) 

[Before](./spinal-tap-case.md)  | [Next](./search-and-replace.md) 

Pig Latin is a way of altering English Words. The rules are as follows:

\- If a word begins with a consonant, take the first consonant or consonant cluster, move it to the end of the word, and add `ay` to it.

\- If a word begins with a vowel, just add `way` at the end.

# --instructions--

Translate the provided string to Pig Latin. Input strings are guaranteed to be English words in all lowercase.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative pig-latin.js %}

{% endhighlight %}

</div>
</div>

