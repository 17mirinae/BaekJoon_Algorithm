import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        int burger = 0, drink = 0;
        
        int high = sc.nextInt();
        int middle = sc.nextInt();
        int low = sc.nextInt();
        
        int coke = sc.nextInt();
        int soda = sc.nextInt();
        
        if(high <= middle) {
            burger = high;
        } else {
            burger = middle;
        }
        
        if(burger >= low) {
            burger = low;
        }
        
        if(coke >= soda) {
            drink = soda;
        } else {
            drink = coke;
        }
        
        System.out.println(burger + drink - 50);
        
        sc.close();
    }
}
