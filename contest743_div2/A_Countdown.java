import java.util.Scanner;

public class A_Countdown{
    private static final Scanner cin = new Scanner(System.in);
    public static void main(String[] args) {
        int t = cin.nextInt();
        while(t-- > 0){
            solve();
        }
    }
    private static void solve() {
        int n = cin.nextInt();
        cin.nextLine();
        String s = cin.nextLine();

        int sum = 0 ,cnt=0;
        for(int i=0;i<n;i++){
            if(s.charAt(i) != '0'){
                cnt++;
            }
            sum += (s.charAt(i)-'0');
        }
        if(cnt ==0){
            System.out.println("0");return;
        }
        sum+=cnt -1 ;    
        System.out.println(sum);
    }
}