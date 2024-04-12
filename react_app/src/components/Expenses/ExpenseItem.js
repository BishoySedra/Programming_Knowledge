import { useState } from "react";
import "./ExpenseItem.css";
import ExpenseDate from "./ExpenseDate";
import Card from "../UI/Card";

function ExpenseItem(props) {
  // use state hook is for functional components only and
  // it is a function that returns an array with two elements
  // where the first element is the current state value and the second element is a function that allows you to update the state value
  const [title, setTitle] = useState(props.title); // [0, function]

  const amount = props.amount;

  const clickHandler = () => {
    setTitle("Updated!!!");
    console.log(title, "Title Updated!!!"); // Title Updated!!!
  };

  return (
    <Card className="expense-item">
      <ExpenseDate date={props.date} />
      <div className="expense-item__description">
        <h2>{title}</h2>
        <div className="expense-item__price">${amount}</div>
      </div>
      <button onClick={clickHandler}>Change Title</button>
    </Card>
  );
}

export default ExpenseItem;
