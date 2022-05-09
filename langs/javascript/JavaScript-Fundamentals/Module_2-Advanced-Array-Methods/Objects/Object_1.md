---
layout: home
title: Advanced Array Methods - Objective 1 
#permalink: index.html # in case of we remove the index.md file, this doc will be the index page
---

<div class="row">
<div class="columnStmt" markdown="1">

<p align="center" ><a href="https://bloomtech-1.wistia.com/medias/2067pej5yb" >
<img src="../Objects/img/Video_clip.png" width="400" height="225" style="width: 400px; height: 225px;"></a></p> 

##  Callback function   

[Home - JavaScript Fundamentals](../README.md) 

[Home - JavaScript Fundamentals](../README.md)  | [Next](./Object_2.md)

You'll hear these words everywhere: "Functions in JavaScript are first-class citizens." And if you're like me, you'll get puzzled, trying to dissect meaning from those words.

Simply put, this means that functions in JavaScript are a Type like any other Type (Boolean, String, Number), and they can be passed around as arguments to other functions.

Take the following example into consideration:

```
const functionFeeder = function(callback) {
  callback('Hello from the inside of Function Feeder');
};
```

What we have done here is define a function called `functionFeeder` and passed it a `parameter` called `callback`. So when `functionFeeder` is invoked, we can feed it a function as an argument. That function, in turn, will run the string `Hello from the inside of Function Feeder` back to the callback function it receives. And thus, when we call `functionFeeder` we can handle that string that comes back to us like so:

```
functionFeeder((string) => { // invoking the function
  alert(string); // alert a function that pops up a box in the browser.
});
```

`functionFeeder` respectively becomes what is known as a `higher-order function` or a `callBack function`, allowing it to take in a function as a parameter and executes a function when called with a function as the argument.

Let's take a look at a few more examples.

```
function sayHello(name) {
    console.log(`Hello, ${name}`);
  }
```

`sayHello` is a function with one purpose, to say hello to the name that is passed into it. Because we've built a function with such a straightforward goal, we can use it over and over again. Once we set up a function that will define the name we want passed to `sayHello`, all we'll have to do is pass it to our function and let it perform is routine / action.

```
 function callSayHelloWithLars(callback) {
    const innerName = 'Lars';
    callback(innerName);
  }
```

The `callback` in the above function will become `sayHello` when we invoke it like this:

```
callSayHelloWithLars(sayHello);
```

And `callSayHelloWithLars` executes `sayHello` as it's callback.

I could re-use `sayHello` in another context now. Check it out.

```
function callSayHelloWithRyan(callback) {
  const newName = 'Ryan';
  callback(newName);
}
```
Now let's combine a few of the things we've learned today. I mentioned that callbacks are used everywhere. They're even used in our Array methods… ALL OF THE TIME! EVERYWHERE! In the case of `.forEach()`, an iterator function, we use a callback to access the items in the array that come back with each pass.

```
const items = ['feather', 'coupon', 'cup', 'drill'];
```

We could use a `native for loop` to loop over this list and log out every item.

```
for(let i = 0; i < items.length; i ++) {
  alert(items[i]);
}
```

This works for sure! But we have `.forEach` built into the language to allow us not to have to write that every time. So, we could do something like this to clean it up a bit.

```
items.forEach(item =>  alert(item) );
```

**NOTICE**

this part is the callback

`item => alert(item)`

This is some fancy syntax that we will continue to go over as the week progresses.

## Follow Along

So now lets practice some things together. First, let's create a list of elements we want to play around with as our data — literally, elements.

```
const elements = ['earth', 'wind', 'fire', 'water'];
```

Remember that with functions we can pass as many parameters as we want to them. So let's create a couple of functions that we can use to consume this list of elements.

Create a function called show first that passes back the first item in the given array.

```
function showFirst(array, callback) {
  callback(array[0]);
}
showFirst(elements, (firstItem) => {
  alert(firstItem);
});
```

Create a function like 'shoFirst', but this time, show the length of the array passed.

```
function showLength(array, callback) {
  callback(array.length);
}
showLength(elements, (length) => {
  alert(length);
});
```

Now, let's use forEach again to loop over our array and alert each item in the array.

```
elements.forEach(element => alert(element));
```

Remember map? The most significant difference between .forEach and .map is that map returns a new array of elements while in turn passing each element back to the callback.

```
const newArray = elements.map(item => 'Element: ' + item);
```

## Challenge

Complete the following exercises included here in this JSBin [Callbacks](http://jsbin.com/sadikid/edit?js,console).




</div>
</div>