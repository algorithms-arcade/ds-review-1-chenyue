---
layout: home
title: Wherefore art thou
challengeType: 5
forumTopicId: 16092
dashedName: wherefore-art-thou
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Intermediate Algorithm Scripting](../intermediate-algorithm-scripting/README.html) 

[Before](./seek-and-destroy.md)  | [Next](./spinal-tap-case.md) 

Make a function that looks through an array of objects (first argument) and returns an array of all objects that have matching name and value pairs (second argument). Each name and value pair of the source object has to be present in the object from the collection if it is to be included in the returned array.

For example, if the first argument is `[{ first: "Romeo", last: "Montague" }, { first: "Mercutio", last: null }, { first: "Tybalt", last: "Capulet" }]`, and the second argument is `{ last: "Capulet" }`, then you must return the third object from the array (the first argument), because it contains the name and its value, that was passed on as the second argument.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative wherefore-art-thou.js %}

{% endhighlight %}

</div>
</div>

