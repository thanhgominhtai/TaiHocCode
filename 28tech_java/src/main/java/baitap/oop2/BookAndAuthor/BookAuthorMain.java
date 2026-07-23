package baitap.oop2.BookAndAuthor;

import java.util.ArrayList;
import java.util.Scanner;

public class BookAuthorMain {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Book> books = new ArrayList<Book>();
        System.out.println("nhap so luong sach");
        int n = sc.nextInt();
        sc.nextLine();
        for(int i = 0; i < n; i++) {
            System.out.println("ten sach");
            String ten = sc.nextLine();
            System.out.println("gia ban");
            double gia = sc.nextInt();
            System.out.println("so luong sach");
            int soLuong = sc.nextInt();
            sc.nextLine();
            System.out.println("nhap thong tin tac gia");
            Author at = new Author(sc.nextLine(), sc.nextLine(), sc.nextLine().charAt(0));
            Book b = new Book(ten, at, gia, soLuong);
            books.add(b);
        }
        for(Book b : books) {
            System.out.println(b);
        }
    }
}
