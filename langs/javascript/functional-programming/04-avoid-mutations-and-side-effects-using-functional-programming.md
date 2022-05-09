---
layout: home
title: 04. Avoid Mutations and Side Effects Using Functional Programming
challengeType: 1
forumTopicId: 301228
dashedName: avoid-mutations-and-side-effects-using-functional-programming
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home -  Functional Programming](./README.md) 

[Before](./03-understand-the-hazards-of-using-imperative-code.md)  | [Next](./05-pass-arguments-to-avoid-external-dependence-in-a-function.md) 

If you haven't already figured it out, the issue in the previous challenge was with the `splice` call in the `tabClose()` function. Unfortunately, `splice` changes the original array it is called on, so the second call to it used a modified array, and gave unexpected results.

This is a small example of a much larger pattern - you call a function on a variable, array, or an object, and the function changes the variable or something in the object.

One of the core principles of functional programming is to not change things. Changes lead to bugs. It's easier to prevent bugs knowing that your functions don't change anything, including the function arguments or any global variable.

The previous example didn't have any complicated operations but the `splice` method changed the original array, and resulted in a bug.

Recall that in functional programming, changing or altering things is called <dfn>mutation</dfn>, and the outcome is called a <dfn>side effect</dfn>. A function, ideally, should be a <dfn>pure function</dfn>, meaning that it does not cause any side effects.

Let's try to master this discipline and not alter any variable or object in our code.

##  Instructions 

Fill in the code for the function `incrementer` so it returns the value of the global variable `fixedValue` increased by one.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 04-avoid-mutations-and-side-effects-using-functional-programming.js %}

{% endhighlight %}

</div>
</div>



