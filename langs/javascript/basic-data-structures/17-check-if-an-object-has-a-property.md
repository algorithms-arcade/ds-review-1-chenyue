---
layout: home
title: 17. Check if an Object has a Property
challengeType: 1
forumTopicId: 301155
dashedName: check-if-an-object-has-a-property
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Basic Data Structures](../basic-data-structures/README.md)

[Before](./16-use-the-delete-keyword-to-remove-object-properties.md)  | [Next](./18-iterate-through-the-keys-of-an-object-with-a-for...in-statement.md)

Now we can add, modify, and remove keys from objects. But what if we just wanted to know if an object has a specific property? JavaScript provides us with two different ways to do this. One uses the `hasOwnProperty()` method and the other uses the `in` keyword. If we have an object `users` with a property of `Alan`, we could check for its presence in either of the following ways:

```js
users.hasOwnProperty('Alan');
'Alan' in users;
```

Both of these would return `true`.

##  instructions 

Finish writing the function so that it returns `true` if the object passed to it contains all four names, `Alan`, `Jeff`, `Sarah` and `Ryan` and returns `false` otherwise.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 17-check-if-an-object-has-a-property.js %}

{% endhighlight %}

</div>
</div>

