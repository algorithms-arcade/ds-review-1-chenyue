---
layout: home
title: Define a Constructor Function
challengeType: 1
forumTopicId: 16804
dashedName: define-a-constructor-function
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Object Oriented Programming](./README.md)

[Before](./make-code-more-reusable-with-the-this-keyword.md)  | [Next](./use-a-constructor-to-create-objects.md) 

<dfn>Constructors</dfn> are functions that create new objects. They define properties and behaviors that will belong to the new object. Think of them as a blueprint for the creation of new objects.

Here is an example of a constructor:

```js
function Bird() {
  this.name = "Albert";
  this.color = "blue";
  this.numLegs = 2;
}
```

This constructor defines a `Bird` object with properties `name`, `color`, and `numLegs` set to Albert, blue, and 2, respectively. Constructors follow a few conventions:

<ul><li>Constructors are defined with a capitalized name to distinguish them from other functions that are not <code>constructors</code>.</li><li>Constructors use the keyword <code>this</code> to set properties of the object they will create. Inside the constructor, <code>this</code> refers to the new object it will create.</li><li>Constructors define properties and behaviors instead of returning a value as other functions might.</li></ul>

##  Instructions 

Create a constructor, `Dog`, with properties `name`, `color`, and `numLegs` that are set to a string, a string, and a number, respectively.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative define-a-constructor-function.js %}

{% endhighlight %}

</div>
</div>


