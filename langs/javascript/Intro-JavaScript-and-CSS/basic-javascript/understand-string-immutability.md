---
layout: home
title: Understand String Immutability
challengeType: 1
videoUrl: 'https://scrimba.com/c/cWPVaUR'
forumTopicId: 18331
dashedName: understand-string-immutability
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./use-bracket-notation-to-find-the-first-character-in-a-string.md)  | [Next](./use-bracket-notation-to-find-the-nth-character-in-a-string.md)

In JavaScript, `String` values are <dfn>immutable</dfn>, which means that they cannot be altered once created.

For example, the following code:

```js
let myStr = "Bob";
myStr[0] = "J";
```

cannot change the value of `myStr` to `Job`, because the contents of `myStr` cannot be altered. Note that this does *not* mean that `myStr` cannot be changed, just that the individual characters of a <dfn>string literal</dfn> cannot be changed. The only way to change `myStr` would be to assign it with a new string, like this:

```js
let myStr = "Bob";
myStr = "Job";
```

##  instructions 

Correct the assignment to `myStr` so it contains the string value of `Hello World` using the approach shown in the example above.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative understand-string-immutability.js %}

{% endhighlight %}

</div>
</div>

