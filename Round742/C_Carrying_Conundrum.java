import java.util.Scanner;

public class C_Carrying_Conundrum {
    private static final Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        int t = sc.nextInt();
        while(t-- > 0){
            solve();
        }
    }
    private static void solve() {
        int n = sc.nextInt();
        int oddPos = 0;
        int evenPos = 0;
        int p = 1;
        while(n > 0){
            oddPos = oddPos + (n%10)*p;
            n/=10;
            evenPos = evenPos + (n%10)*p;
            n/=10;
            p*=10;
        }
        System.out.println((evenPos+1)*(oddPos+1) -2);
    }
}