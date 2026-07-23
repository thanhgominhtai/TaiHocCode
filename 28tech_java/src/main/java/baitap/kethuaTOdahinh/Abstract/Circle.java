package baitap.kethuaTOdahinh.Abstract;

public abstract class Circle extends Shape{
    protected double radius = 1.0;
    public Circle() {}
    public Circle(double radius) {
        this.radius = radius;
    }
    public Circle(double radius, String color, boolean filled) {
        this.radius = radius;
        super(color, filled);
    }
}
