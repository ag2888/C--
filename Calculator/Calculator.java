public class Calculator {

  public static abstract class Expression { 
    abstract public int eval();
    abstract public void print();
  }

  public static class Number extends Expression {

    private final int value;

    public Number(int value) {
      this.value = value;
    }

    public int value() {
      return value;
    }

    public int eval() {
      return value();
    }

    public void print() {
      System.out.print(value());
    }
  }

  public static abstract class BinaryExpression extends Expression {
    
    private final Expression left;
    private final Expression right;

    public BinaryExpression(Expression left, Expression right) {
      this.left = left;
      this.right = right;
    }

    public Expression left() {
      return left;
    }

    public Expression right() {
      return right;
    }

  }

  public static class Addition extends BinaryExpression {

    public Addition(Expression left, Expression right) {
      super(left, right);
    }
    
    public int eval() {
      return left().eval() + right().eval();
    }

    public void print() {
      System.out.print("(");
      left().print();
      System.out.print(" + ");
      right().print();
      System.out.print(")");
    }
  }

  public static class Subtraction extends BinaryExpression {
    
    public Subtraction(Expression left, Expression right) {
      super(left, right);
    }
    
    public int eval() {
      return left().eval() - right().eval();
    }

    public void print() {
      System.out.print("(");
      left().print();
      System.out.print(" - ");
      right().print();
      System.out.print(")");
    }

  }

  public static class Multiplication extends BinaryExpression {

    public Multiplication(Expression left, Expression right) {
      super(left, right);
    }

    public int eval() {
      return left().eval() * right().eval();
    }

    public void print() {
      left().print();
      System.out.print(" * ");
      right().print();
    }
  }

  public static class Division extends BinaryExpression {

    public Division(Expression left, Expression right) {
      super(left, right);
    }

    public int eval() {
      return left().eval() / right().eval();
    }

    public void print() {
      left().print();
      System.out.print(" / ");
      right().print();
    }
  }

  public static int eval(Expression e) {
    return e.eval();
  }

  public static void print(Expression e) {
    e.print();
  }


  // =========================================================================

  public static void main(String[] args) {
    // Create an expression for 2 * 3 + 10 / 5.
    Expression expr =
      new Addition(new Multiplication(new Number(2), new Number(3)),
                   new Division(new Number(10), new Number(5)));

    // Print the expression, evaluate it, and print the result.
    print(expr);
    System.out.print(" = ");
    System.out.println(eval(expr));
    System.out.flush();
  }

}
