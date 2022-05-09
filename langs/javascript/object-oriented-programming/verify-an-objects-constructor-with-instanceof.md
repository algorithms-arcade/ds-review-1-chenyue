---
layout: home
title: Verify an Object's Constructor with instanceof
challengeType: 1
forumTopicId: 301337
dashedName: verify-an-objects-constructor-with-instanceof
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Object Oriented Programming](./README.md)

[Before](./extend-constructors-to-receive-arguments.md)  | [Next](./understand-own-properties.md) 

Anytime a constructor function creates a new object, that object is said to be an <dfn>instance</dfn> of its constructor. JavaScript gives a convenient way to verify this with the `instanceof` operator. `instanceof` allows you to compare an object to a constructor, returning `true` or `false` based on whether or not that object was created with the constructor. Here's an example:

```js
let Bird = function(name, color) {
  this.name = name;
  this.color = color;
  this.numLegs = 2;
}

let crow = new Bird("Alexis", "black");

crow instanceof Bird;
```

This `instanceof` method would return `true`.

If an object is created without using a constructor, `instanceof` will verify that it is not an instance of that constructor:

```js
let canary = {
  name: "Mildred",
  color: "Yellow",
  numLegs: 2
};

canary instanceof Bird;
```

This `instanceof` method would return `false`.

##  Instructions 

Create a new instance of the `House` constructor, calling it `myHouse` and passing a number of bedrooms. Then, use `instanceof` to verify that it is an instance of `House`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative verify-an-objects-constructor-with-instanceof.js %}

{% endhighlight %}

</div>
</div>

