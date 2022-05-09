---
layout: home 
title: 09. Use Destructuring Assignment to Extract Values from Objects
challengeType: 1
forumTopicId: 301216
dashedName: use-destructuring-assignment-to-extract-values-from-objects
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./08-use-the-spread-operator-to-evaluate-arrays-in-place.md)  | [Next](./10-use-destructuring-assignment-to-assign-variables-from-objects.md)

<dfn>Destructuring assignment</dfn> is special syntax introduced in ES6, for neatly assigning values taken directly from an object.

Consider the following ES5 code:

```js
const user = { name: 'John Doe', age: 34 };

const name = user.name;
const age = user.age;
```

`name` would have a value of the string `John Doe`, and `age` would have the number `34`.

Here's an equivalent assignment statement using the ES6 destructuring syntax:

```js
const { name, age } = user;
```

Again, `name` would have a value of the string `John Doe`, and `age` would have the number `34`.

Here, the `name` and `age` variables will be created and assigned the values of their respective values from the `user` object. You can see how much cleaner this is.

You can extract as many or few values from the object as you want.

##  Instructions 

Replace the two assignments with an equivalent destructuring assignment. It should still assign the variables `today` and `tomorrow` the values of `today` and `tomorrow` from the `HIGH_TEMPERATURES` object.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 09-use-destructuring-assignment-to-extract-values-from-objects.js %}

{% endhighlight %}

</div>
</div>

