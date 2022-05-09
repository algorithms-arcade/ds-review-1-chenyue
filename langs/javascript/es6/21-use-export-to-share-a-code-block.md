---
layout: home 
title: 21. Use export to Share a Code Block
challengeType: 1
forumTopicId: 301219
dashedName: use-export-to-share-a-code-block
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./20-create-a-module-script.md)  | [Next](./22-reuse-javascript-code-using-import.md)

Imagine a file called `math_functions.js` that contains several functions related to mathematical operations. One of them is stored in a variable, `add`, that takes in two numbers and returns their sum. You want to use this function in several different JavaScript files. In order to share it with these other files, you first need to `export` it.

```js
export const add = (x, y) => {
  return x + y;
}
```

The above is a common way to export a single function, but you can achieve the same thing like this:

```js
const add = (x, y) => {
  return x + y;
}

export { add };
```

When you export a variable or function, you can import it in another file and use it without having to rewrite the code. You can export multiple things by repeating the first example for each thing you want to export, or by placing them all in the export statement of the second example, like this:

```js
export { add, subtract };
```

##  Instructions

There are two string-related functions in the editor. Export both of them using the method of your choice.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 21-use-export-to-share-a-code-block.js %}

{% endhighlight %}

</div>
</div>


