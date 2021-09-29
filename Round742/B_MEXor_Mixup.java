import java.util.Scanner;

public class B_MEXor_Mixup {
    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
       int t = sc.nextInt();

        while(t-- > 0){
            solve();
        }
    }

    private static void solve() {
        int a = sc.nextInt();
        int b = sc.nextInt();
        int xor = (a-1)%4;
        if(xor ==0){
            xor = a-1;
        }else if(xor ==1){
            xor =1 ;
        }else if(xor ==2){
            xor = a;
        }else{
            xor =0;
        }
        xor ^= b;
        if(xor == a){
            System.out.println(a+2);
        }else if(xor ==0) {
            System.out.println(a);
        }else{
            System.out.println(a+1);
        }
        return ;
    }
}