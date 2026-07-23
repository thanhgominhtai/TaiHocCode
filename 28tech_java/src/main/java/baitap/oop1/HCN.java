package baitap.oop1;

public class HCN {
    private double width, height;
    private String color;
    public HCN(){};
    public HCN(double width, double height, String color){
        this.width = width;
        this.height = height;
        this.color = color;
    }

    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }
    public double findArea(){
        return width*height;
    }
    public double findPerimeter(){
        return (width+height)*2;
    }
    public String toString(){
        return findArea()+"\t"+findPerimeter()+"\t"+color;
    }

    public static void main(String[] args) {
        HCN hcn = new HCN(22, 25, "grey");
        System.out.println(hcn.toString());
    }
}
