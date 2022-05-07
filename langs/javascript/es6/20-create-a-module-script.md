---
layout: home 
title: 20. Create a Module Script
challengeType: 6
forumTopicId: 301198
dashedName: create-a-module-script
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./19-use-getters-and-setters-to-control-access-to-an-object.md)  | [Next](./21-use-export-to-share-a-code-block.md)

JavaScript started with a small role to play on an otherwise mostly HTML web. Today, it’s huge, and some websites are built almost entirely with JavaScript. In order to make JavaScript more modular, clean, and maintainable; ES6 introduced a way to easily share code among JavaScript files. This involves exporting parts of a file for use in one or more other files, and importing the parts you need, where you need them. In order to take advantage of this functionality, you need to create a script in your HTML document with a `type` of `module`. Here’s an example:

```html
<script type="module" src="filename.js"></script>
```

A script that uses this `module` type can now use the `import` and `export` features you will learn about in the upcoming challenges.

##  Instructions

Add a script to the HTML document of type `module` and give it the source file of `index.js`

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 20-create-a-module-script.js %}

{% endhighlight %}

</div>
</div>


