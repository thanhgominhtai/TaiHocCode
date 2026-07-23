/*
[Kiểu dữ liệu-IF ELSE]. Bài 6. Luyện tập viết câu điều kiện

Cho một số nguyên không âm N.Bạn hãy thực hiện viết câu lệnh để kiểm tra các điều kiện sau :

1. N có phải là số chẵn? (Kiểm tra số dư của N với 2 và so sánh 0)

2. N có phải là số vừa chia hết cho 3 vừa chia hết cho 5? (Kết hợp 2 điều kiện sử dụng &&)

3. N có phải là số chia hết 3 nhưng không chia hết cho 7? (Kết hợp 2 điều kiện sử dụng &&)

4. N có phải là số chia hết cho 3 hoặc 7? (Kết hợp 2 điều kiện sử dụng ||)

5. N là số lớn hơn 30 và nhỏ hơn 50? (Kết hợp 2 điều kiện sử dụng &&)

6. N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5? (Lớn hơn hoặc bằng 30 && (chia hết ....

7. N có phải là số có 2 chữ số có chữ tận cùng là một số nguyên tố? (>= 10, <= 99, kiểm tra chữ số tận cùng là 2, 3, 5, 7)

8. N có phải là số không vượt quá 100 và chia hết cho 23?

9. N không thuộc đoạn [10, 20]?

10. N có chữ số tận cùng là bội số của 3?


Input Format

Số nguyên dương N

Constraints

1<=N
 */
package baitap.contest_1;

import java.util.Scanner;

public class vietCauDieuKien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(n % 2 == 0){
            System.out.println("yes");
        }else{
            System.out.println("no");
        }
        
       //2
       if(n % 3 == 0 && n % 5 == 0){
           System.out.println("yes");
       }else{
           System.out.println("no");
       }
       
       // 3
       if(n % 3 == 0 && n % 7 != 0){
           System.out.println("yes");
       }else{
           System.out.println("no");
       }
       
       // 4
       if(n % 3 == 0 || n % 7 == 0){
           System.out.println("yes");
       }else{
           System.out.println("no");
       }
       
       // 5
       if(n > 30 && n < 50){
           System.out.println("yes");
       }else{
           System.out.println("no");
       }
       
       // 6
       if(n >= 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)){
           System.out.println("yes");
       }else{
           System.out.println("no");
       }
       // 7
       if(n < 100 && n > 9){
           if(n % 10 == 2|| n % 10 == 3 || n % 10 == 5 || n % 10 == 7){
               System.out.println("yes");
           }else{
               System.out.println("no");
           }
       }else{
           System.out.println("no");
       }
       // 8
       if(n <= 100 && n % 23 == 0){
           System.out.println("yes");
       }else{
           System.out.println("no");
       }
       // 9 
       if(n > 20 || n < 10){
           System.out.println("yes");
       }else{
           System.out.println("no");
       }
       // 10
       int r = n % 10;
       if(r % 3 == 0 ){
           System.out.println("yes");
       }else{
           System.out.println("no");
       }
    }
}
