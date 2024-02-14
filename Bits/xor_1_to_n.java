import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number");
        int n = sc.nextInt();
        int rem=n%4;
        if(rem==0)
        {
            System.out.println(n);
        }
        else if(rem==1)
        {
          System.out.println(1);  
        }
        else if(rem==2)
        {
            System.out.println(n+1);
        }
        else
        {
          System.out.println(0);  
        }
        
        }
    }
