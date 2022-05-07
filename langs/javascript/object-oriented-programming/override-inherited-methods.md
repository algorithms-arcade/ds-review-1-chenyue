---
layout: home
title: Override Inherited Methods
challengeType: 1
forumTopicId: 301322
dashedName: override-inherited-methods
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Object Oriented Programming](./README.md)

[Before](./add-methods-after-inheritance.md)  | [Next](./use-a-mixin-to-add-common-behavior-between-unrelated-objects.md) 

In previous lessons, you learned that an object can inherit its behavior (methods) from another object by referencing its `prototype` object:

```js
ChildObject.prototype = Object.create(ParentObject.prototype);
```

Then the `ChildObject` received its own methods by chaining them onto its `prototype`:

```js
ChildObject.prototype.methodName = function() {...};
```

It's possible to override an inherited method. It's done the same way - by adding a method to `ChildObject.prototype` using the same method name as the one to override. Here's an example of `Bird` overriding the `eat()` method inherited from `Animal`:

```js
function Animal() { }
Animal.prototype.eat = function() {
  return "nom nom nom";
};
function Bird() { }

Bird.prototype = Object.create(Animal.prototype);

Bird.prototype.eat = function() {
  return "peck peck peck";
};
```

If you have an instance `let duck = new Bird();` and you call `duck.eat()`, this is how JavaScript looks for the method on the `prototype` chain of `duck`:

1.  `duck` => Is `eat()` defined here? No.
2.  `Bird` => Is `eat()` defined here? => Yes. Execute it and stop searching.
3.  `Animal` => `eat()` is also defined, but JavaScript stopped searching before reaching this level.
4.  Object => JavaScript stopped searching before reaching this level.

##  Instructions 

Override the `fly()` method for `Penguin` so that it returns the string `Alas, this is a flightless bird.`

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative override-inherited-methods.js %}

{% endhighlight %}

</div>
</div>

