# ReactJS Notes

Here are some key concepts to understand when working with ReactJS:

- **JSX**: JSX is a syntax extension for JavaScript. It is not a necessity to write React applications, but it's a recommended way to describe what the UI should look like. JSX may remind you of a template language, but it comes with the full power of JavaScript. It allows you to write HTML code inside your JavaScript, making it easier to create React elements.

- **Components in ReactJS**: In ReactJS, a component is essentially a JavaScript function or class that optionally accepts inputs i.e., properties (props) and returns a React element that describes how a section of the UI should appear. The simplicity of components allows for more modularity and reusability in your applications.

**IMPORTANT NOTE:** React is all about building reusable components. In fact, with React, you're usually building small components that turn into larger ones. This makes your code more predictable and easier to debug, a huge advantage when building large-scale applications.

## Execution of JSX Code and Using State Hook

Under the hood, JSX code is transformed into regular JavaScript code by tools like Babel before it's rendered in the browser. For example, JSX elements are transformed into `React.createElement()` calls, which create React elements.

React provides a built-in `useState` hook that allows functional components to manage state. The `useState` hook returns a stateful value and a function to update it. You can use the `useState` hook in functional components to add state management capabilities without converting them to class components.

```jsx
import React, { useState } from "react";

function Counter() {
  // Declare a state variable named "count" and initialize it with 0
  const [count, setCount] = useState(0);

  const clickHandler = () => {
    setCount(count);
  };

  return (
    <div>
      <p>You clicked {count} times</p>
      <button onClick={clickHandler}>Click me</button>
    </div>
  );
}

export default Counter;
```

In this example, the `useState` hook is used to declare a state variable named `count` and a function `setCount` to update its value. The initial value of `count` is set to 0. When the button is clicked, the `setCount` function is called to increment the count.
