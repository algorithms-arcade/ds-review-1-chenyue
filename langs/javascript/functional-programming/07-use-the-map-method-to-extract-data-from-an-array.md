---
layout: home
title: 07. Use the map Method to Extract Data from an Array
challengeType: 1
forumTopicId: 18214
dashedName: use-the-map-method-to-extract-data-from-an-array
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home -  Functional Programming](./README.md) 

[Before](./06-refactor-global-variables-out-of-functions.md)  | [Next](./08-implement-map-on-a-prototype.md) 

So far we have learned to use pure functions to avoid side effects in a program. Also, we have seen the value in having a function only depend on its input arguments.

This is only the beginning. As its name suggests, functional programming is centered around a theory of functions.

It would make sense to be able to pass them as arguments to other functions, and return a function from another function. Functions are considered <dfn>first class objects</dfn> in JavaScript, which means they can be used like any other object. They can be saved in variables, stored in an object, or passed as function arguments.

Let's start with some simple array functions, which are methods on the array object prototype. In this exercise we are looking at `Array.prototype.map()`, or more simply `map`.

The `map` method iterates over each item in an array and returns a new array containing the results of calling the callback function on each element. It does this without mutating the original array.

When the callback is used, it is passed three arguments. The first argument is the current element being processed. The second is the index of that element and the third is the array upon which the `map` method was called.

See below for an example using the `map` method on the `users` array to return a new array containing only the names of the users as elements. For simplicity, the example only uses the first argument of the callback.

```js
const users = [
  { name: 'John', age: 34 },
  { name: 'Amy', age: 20 },
  { name: 'camperCat', age: 10 }
];

const names = users.map(user => user.name);
console.log(names);
```

The console would display the value ` [ 'John', 'Amy', 'camperCat' ]`.

##  Instructions 

The `watchList` array holds objects with information on several movies. Use `map` on `watchList` to assign a new array of objects to the `ratings` variable. Each movie in the new array should have only a `title` key with the name of the film, and a `rating` key with the IMDB rating. The code in the editor currently uses a `for` loop to do this, so you should replace the loop functionality with your `map` expression.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 07-use-the-map-method-to-extract-data-from-an-array.js %}

{% endhighlight %}

</div>
</div>


