---
layout: home
title: Understand Where an Object’s Prototype Comes From
challengeType: 1
forumTopicId: 301330
dashedName: understand-where-an-objects-prototype-comes-from
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Object Oriented Programming](./README.md)

[Before](./remember-to-set-the-constructor-property-when-changing-the-prototype.md)  | [Next](./understand-the-prototype-chain.md) 

Just like people inherit genes from their parents, an object inherits its `prototype` directly from the constructor function that created it. For example, here the `Bird` constructor creates the `duck` object:

```js
function Bird(name) {
  this.name = name;
}

let duck = new Bird("Donald");
```

`duck` inherits its `prototype` from the `Bird` constructor function. You can show this relationship with the `isPrototypeOf` method:

```js
Bird.prototype.isPrototypeOf(duck);
```

This would return `true`.

##  Instructions 

Use `isPrototypeOf` to check the `prototype` of `beagle`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative understand-where-an-objects-prototype-comes-from.js %}

{% endhighlight %}

</div>
</div>

