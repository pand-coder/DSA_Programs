import java.util.Scanner;
public class Main{
    public static void main(String[] args)
    {
        int n;
        System.out.print("Enter the number:");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        if(n==0)
        {
            System.out.println("1");
        }
        else
        {
           int res=flipbits(n);
           System.out.print("Flipped bits of "+n+":"+res);
            
        }
    }
    public static int flipbits(int x)
    {
        return ~x;
    }
        
    }
