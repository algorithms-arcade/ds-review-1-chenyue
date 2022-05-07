---
layout: home
title: 09. Use the filter Method to Extract Data from an Array
challengeType: 1
forumTopicId: 18179
dashedName: use-the-filter-method-to-extract-data-from-an-array
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Home -  Functional Programming](./README.md) 

[Before](./08-implement-map-on-a-prototype.md)  | [Next](./10-implement-the-filter-method-on-a-prototype.md) 

Another useful array function is `Array.prototype.filter()`, or simply `filter()`.

`filter` calls a function on each element of an array and returns a new array containing only the elements for which that function returns `true`. In other words, it filters the array, based on the function passed to it. Like `map`, it does this without needing to modify the original array.

The callback function accepts three arguments. The first argument is the current element being processed. The second is the index of that element and the third is the array upon which the `filter` method was called.

See below for an example using the `filter` method on the `users` array to return a new array containing only the users under the age of 30. For simplicity, the example only uses the first argument of the callback.

```js
const users = [
  { name: 'John', age: 34 },
  { name: 'Amy', age: 20 },
  { name: 'camperCat', age: 10 }
];

const usersUnder30 = users.filter(user => user.age < 30);
console.log(usersUnder30); 
```

The console would display the value `[ { name: 'Amy', age: 20 }, { name: 'camperCat', age: 10 } ]`.

##  Instructions 

The variable `watchList` holds an array of objects with information on several movies. Use a combination of `filter` and `map` on `watchList` to assign a new array of objects with only `title` and `rating` keys. The new array should only include objects where `imdbRating` is greater than or equal to 8.0. Note that the `rating` values are saved as strings in the object and you may need to convert them into numbers to perform mathematical operations on them.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 09-use-the-filter-method-to-extract-data-from-an-array.js %}

{% endhighlight %}

</div>
</div>


