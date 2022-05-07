---
layout: home
title: 19. Generate an Array of All Object Keys with Object.keys()
challengeType: 1
forumTopicId: 301160
dashedName: generate-an-array-of-all-object-keys-with-object-keys
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Basic Data Structures](../basic-data-structures/README.md)

[Before](./18-iterate-through-the-keys-of-an-object-with-a-for...in-statement.md)  | [Next](./20-modify-an-array-stored-in-an-object.md)

We can also generate an array which contains all the keys stored in an object using the `Object.keys()` method and passing in an object as the argument. This will return an array with strings representing each property in the object. Again, there will be no specific order to the entries in the array.

##  instructions 

Finish writing the `getArrayOfUsers` function so that it returns an array containing all the properties in the object it receives as an argument.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 19-generate-an-array-of-all-object-keys-with-object.keys.js %}

{% endhighlight %}

</div>
</div>

