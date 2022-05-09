---
layout: home
title: Use Inheritance So You Don't Repeat Yourself
challengeType: 1
forumTopicId: 301334
dashedName: use-inheritance-so-you-dont-repeat-yourself
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Object Oriented Programming](./README.md)

[Before](./understand-the-prototype-chain.md)  | [Next](./inherit-behaviors-from-a-supertype.md) 

There's a principle in programming called <dfn>Don't Repeat Yourself (DRY)</dfn>. The reason repeated code is a problem is because any change requires fixing code in multiple places. This usually means more work for programmers and more room for errors.

Notice in the example below that the `describe` method is shared by `Bird` and `Dog`:

```js
Bird.prototype = {
  constructor: Bird,
  describe: function() {
    console.log("My name is " + this.name);
  }
};

Dog.prototype = {
  constructor: Dog,
  describe: function() {
    console.log("My name is " + this.name);
  }
};
```

The `describe` method is repeated in two places. The code can be edited to follow the DRY principle by creating a `supertype` (or parent) called `Animal`:

```js
function Animal() { };

Animal.prototype = {
  constructor: Animal, 
  describe: function() {
    console.log("My name is " + this.name);
  }
};
```

Since `Animal` includes the `describe` method, you can remove it from `Bird` and `Dog`:

```js
Bird.prototype = {
  constructor: Bird
};

Dog.prototype = {
  constructor: Dog
};
```

##  Instructions 

The `eat` method is repeated in both `Cat` and `Bear`. Edit the code in the spirit of DRY by moving the `eat` method to the `Animal` `supertype`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative use-inheritance-so-you-dont-repeat-yourself.js %}

{% endhighlight %}

</div>
</div>

