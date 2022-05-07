---
layout: home
title: Reset an Inherited Constructor Property
challengeType: 1
forumTopicId: 301324
dashedName: reset-an-inherited-constructor-property
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Object Oriented Programming](./README.md)

[Before](./set-the-childs-prototype-to-an-instance-of-the-parent.md)  | [Next](./add-methods-after-inheritance.md) 

When an object inherits its `prototype` from another object, it also inherits the supertype's constructor property.

Here's an example:

```js
function Bird() { }
Bird.prototype = Object.create(Animal.prototype);
let duck = new Bird();
duck.constructor
```

But `duck` and all instances of `Bird` should show that they were constructed by `Bird` and not `Animal`. To do so, you can manually set the constructor property of `Bird` to the `Bird` object:

```js
Bird.prototype.constructor = Bird;
duck.constructor
```

##  Instructions 

Fix the code so `duck.constructor` and `beagle.constructor` return their respective constructors.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative reset-an-inherited-constructor-property.js %}

{% endhighlight %}

</div>
</div>

