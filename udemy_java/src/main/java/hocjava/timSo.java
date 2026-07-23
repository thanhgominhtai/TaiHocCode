/*
tim cac so chia het cho 7
khong la boi cua 5
va nam tong 10 den 200
*/
package hocjava;

public class timSo {
    public static void main(String[] args) {
        for(int i = 10; i <= 200; i++)
        {
            if(i % 7 == 0 && i % 5 != 0)
            {
                System.out.print(" " + i);
            }
        }
    }
}
