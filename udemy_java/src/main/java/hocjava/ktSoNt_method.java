
package hocjava;

import static java.lang.Math.sqrt;
import java.util.Scanner;

public class ktSoNt_method {
    public boolean kt(int n)
    {
        for(int i = 2; i <= Math.sqrt(n); i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        ktSoNt_method obj = new ktSoNt_method();
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        if (obj.kt(n)) {
            System.out.println("la nt");
        } else System.out.println("ko la nt");
    }
}
