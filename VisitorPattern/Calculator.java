/*
 * Object-Oriented Programming
 * Copyright (C) 2012 Robert Grimm
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
 * USA.
 */

public class Calculator {

  public static abstract class Expression {

    public abstract <R, E extends Throwable> R accept(Visitor<R,E> v) throws E;

  }

  // =========================================================================

  public static class Number extends Expression {

    private final int value;

    public Number(int value) {
      this.value = value;
    }

    public int value() {
      return value;
    }

    public <R, E extends Throwable> R accept(Visitor<R,E> v) throws E {
      return v.visitNumber(this);
    }

  }

  // =========================================================================

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

  // =========================================================================

  public static class Addition extends BinaryExpression {

    public Addition(Expression left, Expression right) {
      super(left, right);
    }

    public <R, E extends Throwable> R accept(Visitor<R,E> v) throws E {
      return v.visitAddition(this);
    }

  }

  // =========================================================================

  public static class Subtraction extends BinaryExpression {
    
    public Subtraction(Expression left, Expression right) {
      super(left, right);
    }

    public <R, E extends Throwable> R accept(Visitor<R,E> v) throws E {
      return v.visitSubtraction(this);
    }

  }

  // =========================================================================

  public static class Multiplication extends BinaryExpression {

    public Multiplication(Expression left, Expression right) {
      super(left, right);
    }

    public <R, E extends Throwable> R accept(Visitor<R,E> v) throws E {
      return v.visitMultiplication(this);
    }

  }

  // =========================================================================

  public static class Division extends BinaryExpression {

    public Division(Expression left, Expression right) {
      super(left, right);
    }

    public <R, E extends Throwable> R accept(Visitor<R,E> v) throws E {
      return v.visitDivision(this);
    }

  }

  // =========================================================================

  public static interface Visitor<R, E extends Throwable> {
    R visitNumber(Number num) throws E;
    R visitAddition(Addition add) throws E;
    R visitSubtraction(Subtraction sub) throws E;
    R visitMultiplication(Multiplication mul) throws E;
    R visitDivision(Division div) throws E;
  }

  // =========================================================================

  public static class AOK extends RuntimeException {
    
    private AOK() {
      // Nothing to do.
    }
    
  }

  // =========================================================================

  public static class Printer implements Visitor<Void, AOK> {

    public Void visitNumber(Number num) {
      System.out.print(num.value());
      return null;
    }

    public Void visitAddition(Addition add) {
      System.out.print('(');
      /* DO NOT EVER DO THIS
      Expression left = add.left();
      if (left instanceof Number) {
        visitNumber((Number)left);
      } else if (left instanceof Addition) {
        ...
      }*/
      add.left().accept(this);
      System.out.print(" + ");
      add.right().accept(this);
      System.out.print(')');
      return null;
    }

    public Void visitSubtraction(Subtraction sub) {
      System.out.print('(');
      sub.left().accept(this);
      System.out.print(" - ");
      sub.right().accept(this);
      System.out.print(')');
      return null;
    }

    public Void visitMultiplication(Multiplication mul) {
      mul.left().accept(this);
      System.out.print(" * ");
      mul.right().accept(this);
      return null;
    }

    public Void visitDivision(Division div) {
      div.left().accept(this);
      System.out.print(" / ");
      div.right().accept(this);
      return null;
    }

  }

  // =========================================================================

  public static class Evaluator
    implements Visitor<Integer, ArithmeticException> {

    public Integer visitNumber(Number num) {
      return num.value();
    }

    public Integer visitAddition(Addition add) {
      return add.left().accept(this) + add.right().accept(this);
    }

    public Integer visitSubtraction(Subtraction sub) {
      return sub.left().accept(this) - sub.right().accept(this);
    }

    public Integer visitMultiplication(Multiplication mul) {
      return mul.left().accept(this) * mul.right().accept(this);
    }

    public Integer visitDivision(Division div) {
      return div.left().accept(this) / div.right().accept(this);
    }

  }

  // =========================================================================

  public static void main(String[] args) {
    // Create an expression for 2 * 3 + 10 / 5.
    Expression expr =
      new Addition(new Subtraction(new Number(5), new Number(3)),
                   new Division(new Number(10), new Number(5)));

    // Print the expression, evaluate it, and print the result.
    expr.accept(new Printer());
    System.out.print(" = ");
    System.out.println(expr.accept(new Evaluator()));
    System.out.flush();
  }

}
