---
layout: home
title: 20. Modify an Array Stored in an Object
challengeType: 1
forumTopicId: 301163
dashedName: modify-an-array-stored-in-an-object
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home - Basic Data Structures](README.html)

[Before](./19-generate-an-array-of-all-object-keys-with-object.keys.md)  | [Home - Basic Data Structures](README.html)

Now you've seen all the basic operations for JavaScript objects. You can add, modify, and remove key-value pairs, check if keys exist, and iterate over all the keys in an object. As you continue learning JavaScript you will see even more versatile applications of objects. Additionally, the Data Structures lessons located in the Coding Interview Prep section of the curriculum also cover the ES6 <dfn>Map</dfn> and <dfn>Set</dfn> objects, both of which are similar to ordinary objects but provide some additional features. Now that you've learned the basics of arrays and objects, you're fully prepared to begin tackling more complex problems using JavaScript!

##  instructions 

Take a look at the object we've provided in the code editor. The `user` object contains three keys. The `data` key contains five keys, one of which contains an array of `friends`. From this, you can see how flexible objects are as data structures. We've started writing a function `addFriend`. Finish writing it so that it takes a `user` object and adds the name of the `friend` argument to the array stored in `user.data.friends` and returns that array.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 20-modify-an-array-stored-in-an-object.js %}

{% endhighlight %}

</div>
</div>

