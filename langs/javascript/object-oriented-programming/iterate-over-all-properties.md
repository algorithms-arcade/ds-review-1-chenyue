---
layout: home
title: Iterate Over All Properties
challengeType: 1
forumTopicId: 301320
dashedName: iterate-over-all-properties
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Object Oriented Programming](./README.md)

[Before](./use-prototype-properties-to-reduce-duplicate-code.md)  | [Next](./understand-the-constructor-property.md) 

You have now seen two kinds of properties: <dfn>own properties</dfn> and `prototype` properties. Own properties are defined directly on the object instance itself. And prototype properties are defined on the `prototype`.

```js
function Bird(name) {
  this.name = name;  //own property
}

Bird.prototype.numLegs = 2; // prototype property

let duck = new Bird("Donald");
```

Here is how you add `duck`'s own properties to the array `ownProps` and `prototype` properties to the array `prototypeProps`:

```js
let ownProps = [];
let prototypeProps = [];

for (let property in duck) {
  if(duck.hasOwnProperty(property)) {
    ownProps.push(property);
  } else {
    prototypeProps.push(property);
  }
}

console.log(ownProps);
console.log(prototypeProps);
```

`console.log(ownProps)` would display `["name"]` in the console, and `console.log(prototypeProps)` would display `["numLegs"]`.

##  Instructions 

Add all of the own properties of `beagle` to the array `ownProps`. Add all of the `prototype` properties of `Dog` to the array `prototypeProps`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative iterate-over-all-properties.js %}

{% endhighlight %}

</div>
</div>

