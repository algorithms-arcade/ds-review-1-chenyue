---
layout: home
title: Pointers
#permalink: index.html # in case of we remove the index.md file, this doc will be the index page
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[Contents - Reviews](../README.md)

[Home](../README.md) | [Continue or Break?](./100_continue_or_break.md)

[Alt/rust](./hello.c) | [Alt/go](./hello.c) | [Alt/js](./Alt_js/README.html) | [Alt/py3](./Alt_py3/README.md) | [Alt/cpp](./00_pointer_ref.cpp)


In order to have a pointer actually point to another variable it is necessary to have the memory address of that variable also. To get the memory address of a variable (its location in memory), put the & sign in front of the variable name. This makes it give its address. This is called the address-of operator, because it returns the memory address. Conveniently, both ampersand and address-of start with a; that's a useful way to remember that you use & to get the address of a variable.

- [delete keyword in C++](https://www.geeksforgeeks.org/delete-in-c/)

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight javascript linenos=table %}

{% include_relative 00_pointer_ref.c %}

{% endhighlight %}

</div>
</div>