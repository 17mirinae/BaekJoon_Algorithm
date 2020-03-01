import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        
        int answer = (a+b)%c;
        System.out.printf("%d\n%d\n", answer, answer%c);
        
        answer = (a*b)%c;
        System.out.printf("%d\n%d", answer, answer%c);
        
        sc.close();
    }
}
