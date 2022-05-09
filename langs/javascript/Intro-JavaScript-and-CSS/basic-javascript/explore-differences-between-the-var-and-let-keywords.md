---
layout: home
title: Explore Differences Between the var and let Keywords
challengeType: 1
forumTopicId: 301202
dashedName: explore-differences-between-the-var-and-let-keywords
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Basic JavaScript](./README.md) 

[Before](./understanding-case-sensitivity-in-variables.md)  | [Next](./declare-a-read-only-variable-with-the-const-keyword.md) 

One of the biggest problems with declaring variables with the `var` keyword is that you can easily overwrite variable declarations:

```js
var camper = "James";
var camper = "David";
console.log(camper);
```

In the code above, the `camper` variable is originally declared as `James`, and is then overridden to be `David`. The console then displays the string `David`.

In a small application, you might not run into this type of problem. But as your codebase becomes larger, you might accidentally overwrite a variable that you did not intend to. Because this behavior does not throw an error, searching for and fixing bugs becomes more difficult.

A keyword called `let` was introduced in ES6, a major update to JavaScript, to solve this potential issue with the `var` keyword. You'll learn about other ES6 features in later challenges.

If you replace `var` with `let` in the code above, it results in an error:

```js
let camper = "James";
let camper = "David";
```

The error can be seen in your browser console.

So unlike `var`, when you use `let`, a variable with the same name can only be declared once.

##  instructions 

Update the code so it only uses the `let` keyword.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative explore-differences-between-the-var-and-let-keywords.js %}

{% endhighlight %}

</div>
</div>

