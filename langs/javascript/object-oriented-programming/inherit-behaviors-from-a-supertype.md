---
layout: home
title: Inherit Behaviors from a Supertype
challengeType: 1
forumTopicId: 301319
dashedName: inherit-behaviors-from-a-supertype
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Object Oriented Programming](./README.md)

[Before](./use-inheritance-so-you-dont-repeat-yourself.md)  | [Next](./set-the-childs-prototype-to-an-instance-of-the-parent.md) 

In the previous challenge, you created a `supertype` called `Animal` that defined behaviors shared by all animals:

```js
function Animal() { }
Animal.prototype.eat = function() {
  console.log("nom nom nom");
};
```

This and the next challenge will cover how to reuse the methods of `Animal` inside `Bird` and `Dog` without defining them again. It uses a technique called inheritance. This challenge covers the first step: make an instance of the `supertype` (or parent). You already know one way to create an instance of `Animal` using the `new` operator:

```js
let animal = new Animal();
```

There are some disadvantages when using this syntax for inheritance, which are too complex for the scope of this challenge. Instead, here's an alternative approach without those disadvantages:

```js
let animal = Object.create(Animal.prototype);
```

`Object.create(obj)` creates a new object, and sets `obj` as the new object's `prototype`. Recall that the `prototype` is like the "recipe" for creating an object. By setting the `prototype` of `animal` to be the `prototype` of `Animal`, you are effectively giving the `animal` instance the same "recipe" as any other instance of `Animal`.

```js
animal.eat();
animal instanceof Animal;
```

The `instanceof` method here would return `true`.

##  Instructions 

Use `Object.create` to make two instances of `Animal` named `duck` and `beagle`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative inherit-behaviors-from-a-supertype.js %}

{% endhighlight %}

</div>
</div>
