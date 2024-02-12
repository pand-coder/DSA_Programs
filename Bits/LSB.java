import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number:");
        int n = sc.nextInt();
        if (n<=0) {
            System.out.println("0");
        } else {
            int Pos = Integer.numberOfTrailingZeros(n);
            int Value = n & 1;
            System.out.println("LSB position: " + Pos);
            System.out.println("LSB value: " + Value);
        }
    }
}
