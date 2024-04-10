import ExpenseItem from "./ExpenseItem";
import "./Expenses.css";
import Card from "./UI/Card";

function Expenses(props) {
  const expenses = props.items;

  return (
    <Card className="expenses">
      {expenses.map((expense) => (
        <ExpenseItem
          key={expense.id}
          title={expense.title}
          amount={expense.amount}
          date={expense.date}
        />
      ))}
    </Card>
  );
}

export default Expenses;
