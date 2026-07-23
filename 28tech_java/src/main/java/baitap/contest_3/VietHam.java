/*[Hàm, Lý Thuyết Số]. Luyện tập viết hàm (Quan trọng)

Cho số nguyên n không âm. Viết hàm xử lý các yêu cầu sau

1. Kiểm tra n là số nguyên tố, nếu đúng in 1, sai in 0.
2. In tổng chữ số của n.
3. In tổng chữ số chẵn của n.
4. In tổng chữ số của n là số nguyên tố.
5. In số lật ngược của n. Ví dụ 123 in 321.
6. In số lượng ước của n là số nguyên tố (làm tương tự như phân tích thừa số ng tố).
7. In ước nguyên tố lớn nhất của n (làm tương tự như phân tích thừa số ng tố).
8. Kiểm tra nếu n tồn tại ít nhất 1 số 6, nếu đúng in 1, sai in 0.
9. Kiểm tra nếu tổng chữ số của n chia hết cho 8, nếu đúng in 1, sai in 0.
10. Tính tổng giai thừa các chữ số của n và in ra. Ví dụ n = 123, tổng = 1! + 2! +3!
11. Kiểm tra n có phải chỉ được tạo bởi 1 số hay không? Ví dụ 222, 333, 99999. Đúng in ra 1, sai in ra 0.
12. Kiểm tra n có phải có chữ số tận cùng là lớn nhất hay không, tức là không có chữ số nào của n lớn hơn chữ số hàng đơn vị của nó. nếu đúng in 1, sai in 0.
13. In tổng lũy thừa chữ số của n với số mũ là số chữ số. ví dụ 123 thì tính 1^3+2^3+3^3.

Constraints
2<=n<=1000;

Output Format
In ra 13 dòng tương ứng với các yêu cầu ở trên.

Sample Input 0
36

Sample Output 0
0
9
6
3
63
2
3
1
0
726
0
1
45
 */
package baitap.contest_3;

import java.util.Scanner;

/**
 *
 * @author nmt17
 */
public class VietHam {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(ktNguyenTo(n));
        tongChuSo(n);
        tongChuSoChan(n);
        tongChuSoNT(n);
        inSoLatNguoc(n);
    }
    //1
    public static int ktNguyenTo(int n){
        for(int i = 2; i < Math.sqrt(n); i++){
            if(n % i == 0){
                return 0;
            }else{
                return 1;
            }
                
        }
        return 1;
    }
    //2
    public static void tongChuSo(int n){
        int tong = 0;
        while(n != 0){
            tong += n % 10;
            n /= 10;
        }
        System.out.println(tong);
    }
    //3
    public static void tongChuSoChan(int n){
        int tong = 0;
        while(n != 0){
            if((n % 10) % 2 == 0){
                tong += n % 10;
            }
            n /= 10;
        }
        System.out.println(tong);
    }
    //4
    public static void tongChuSoNT(int n){
        int tong = 0;
        while(n != 0){
            if(ktNguyenTo(n % 10) == 1){
                tong += n % 10;
            }
            n /= 10;
        }
        System.out.println(tong);
    }
    //5
    public static void inSoLatNguoc(int n){
        while(n != 0){
            System.out.print(n%10);
            n /= 10;
        }
        System.out.println("");
    }
}
