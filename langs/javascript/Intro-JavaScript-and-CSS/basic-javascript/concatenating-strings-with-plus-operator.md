---
layout: home
title: Concatenating Strings with Plus Operator
challengeType: 1
videoUrl: 'https://scrimba.com/c/cNpM8AN'
forumTopicId: 16802
dashedName: concatenating-strings-with-plus-operator
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./escape-sequences-in-strings.md)  | [Next](./concatenating-strings-with-the-plus-equals-operator.md) 

In JavaScript, when the `+` operator is used with a `String` value, it is called the <dfn>concatenation</dfn> operator. You can build a new string out of other strings by <dfn>concatenating</dfn> them together.

**Example**

```js
'My name is Alan,' + ' I concatenate.'
```

**Note:** Watch out for spaces. Concatenation does not add spaces between concatenated strings, so you'll need to add them yourself.

Example:

```js
const ourStr = "I come first. " + "I come second.";
```

The string `I come first. I come second.` would be displayed in the console.
##  instructions 

Build `myStr` from the strings `This is the start.` and `This is the end.` using the `+` operator. Be sure to include a space between the two strings.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative concatenating-strings-with-plus-operator.js %}

{% endhighlight %}

</div>
</div>




```js
const myStr = "This is the start. " + "This is the end.";
```
