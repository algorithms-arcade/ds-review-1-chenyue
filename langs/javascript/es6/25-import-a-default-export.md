---
layout: home 
title: 25. Import a Default Export
challengeType: 1
forumTopicId: 301205
dashedName: import-a-default-export
---

<div class="row">
<div class="columnStmt" markdown="1">

## Description
------

[ES 6 -  JavaScript](./README.md) 

[Before](./24-create-an-export-fallback-with-export-default.md)  | [Next](./26-create-a-javascript-promise.md)

In the last challenge, you learned about `export default` and its uses. To import a default export, you need to use a different `import` syntax. In the following example, `add` is the default export of the `math_functions.js` file. Here is how to import it:

```js
import add from "./math_functions.js";
```

The syntax differs in one key place. The imported value, `add`, is not surrounded by curly braces (`{}`). `add` here is simply a variable name for whatever the default export of the `math_functions.js` file is. You can use any name here when importing a default.

##  Instructions

In the following code, import the default export from the `math_functions.js` file, found in the same directory as this file. Give the import the name `subtract`.

</div>
<div class="columnSol" markdown="1">

## Solution
------

{% highlight sql linenos=table %}

{% include_relative 25-import-a-default-export.js %}

{% endhighlight %}

</div>
</div>

