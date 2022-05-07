---
layout: home
title: 06. Refactor Global Variables Out of Functions
challengeType: 1
forumTopicId: 301235
dashedName: refactor-global-variables-out-of-functions
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home -  Functional Programming](./README.md) 

[Before](./05-pass-arguments-to-avoid-external-dependence-in-a-function.md)  | [Next](./07-use-the-map-method-to-extract-data-from-an-array.md) 

So far, we have seen two distinct principles for functional programming:

1) Don't alter a variable or object - create new variables and objects and return them if need be from a function. Hint: using something like `var newArr = arrVar`, where `arrVar` is an array will simply create a reference to the existing variable and not a copy. So changing a value in `newArr` would change the value in `arrVar`.

2) Declare function parameters - any computation inside a function depends only on the arguments passed to the function, and not on any global object or variable.

Adding one to a number is not very exciting, but we can apply these principles when working with arrays or more complex objects.

##  Instructions 

Rewrite the code so the global array `bookList` is not changed inside either function. The `add` function should add the given `bookName` to the end of the array passed to it and return a new array (list). The `remove` function should remove the given `bookName` from the array passed to it.

**Note:** Both functions should return an array, and any new parameters should be added before the `bookName` parameter.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 06-refactor-global-variables-out-of-functions.js %}

{% endhighlight %}

</div>
</div>


