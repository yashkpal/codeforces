import java.util.Scanner;

public class A_Domino_Disaster {
    private static final Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
       int t = sc.nextInt();

        while(t-- > 0){
            solve();
        }
    }

    private static void solve() {
        int n = sc.nextInt();
        sc.nextLine();
        String s = sc.nextLine();

        for(int i=0;i<n;i++){
            if(s.charAt(i) == 'U'){
                System.out.print("D");
            }else if(s.charAt(i) == 'D'){
                System.out.print("U");
            }else{
                System.out.print(s.charAt(i));
            }
        }
        System.out.println();
        return ;
    }
}