---
layout: home
title: Create a Method on an Object
challengeType: 1
forumTopicId: 301318
dashedName: create-a-method-on-an-object
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Object Oriented Programming](./README.md)

[Before](./use-dot-notation-to-access-the-properties-of-an-object.md)  | [Next](./make-code-more-reusable-with-the-this-keyword.md) 

Objects can have a special type of property, called a <dfn>method</dfn>.

Methods are properties that are functions. This adds different behavior to an object. Here is the `duck` example with a method:

```js
let duck = {
  name: "Aflac",
  numLegs: 2,
  sayName: function() {return "The name of this duck is " + duck.name + ".";}
};
duck.sayName();
```

The example adds the `sayName` method, which is a function that returns a sentence giving the name of the `duck`. Notice that the method accessed the `name` property in the return statement using `duck.name`. The next challenge will cover another way to do this.

##  Instructions 

Using the `dog` object, give it a method called `sayLegs`. The method should return the sentence `This dog has 4 legs.`

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative create-a-method-on-an-object.js %}

{% endhighlight %}

</div>
</div>

