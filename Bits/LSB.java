import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number:");
        int n = sc.nextInt();
        if (n<=0) {
            System.out.println("0");
        } else {
            int lsbPosition = Integer.numberOfTrailingZeros(n);
            int lsbValue = n & 1;
            System.out.println("LSB position: " + lsbPosition);
            System.out.println("LSB value: " + lsbValue);
        }
    }
}
