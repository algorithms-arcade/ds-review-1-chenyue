---
layout: home
title: Use an IIFE to Create a Module
challengeType: 1
forumTopicId: 301332
dashedName: use-an-iife-to-create-a-module
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Object Oriented Programming](./README.md)

[Before](./understand-the-immediately-invoked-function-expression-iife.md)  | [Home - Object Oriented Programming](./README.md)

An immediately invoked function expression (IIFE) is often used to group related functionality into a single object or <dfn>module</dfn>. For example, an earlier challenge defined two mixins:

```js
function glideMixin(obj) {
  obj.glide = function() {
    console.log("Gliding on the water");
  };
}
function flyMixin(obj) {
  obj.fly = function() {
    console.log("Flying, wooosh!");
  };
}
```

We can group these mixins into a module as follows:

```js
let motionModule = (function () {
  return {
    glideMixin: function(obj) {
      obj.glide = function() {
        console.log("Gliding on the water");
      };
    },
    flyMixin: function(obj) {
      obj.fly = function() {
        console.log("Flying, wooosh!");
      };
    }
  }
})();
```

Note that you have an immediately invoked function expression (IIFE) that returns an object `motionModule`. This returned object contains all of the mixin behaviors as properties of the object. The advantage of the module pattern is that all of the motion behaviors can be packaged into a single object that can then be used by other parts of your code. Here is an example using it:

```js
motionModule.glideMixin(duck);
duck.glide();
```

##  Instructions 

Create a module named `funModule` to wrap the two mixins `isCuteMixin` and `singMixin`. `funModule` should return an object.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative use-an-iife-to-create-a-module.js %}

{% endhighlight %}

</div>
</div>

