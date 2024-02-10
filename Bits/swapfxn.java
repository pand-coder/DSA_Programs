import java.util.Scanner;
public class Main{
    public static void main(String[] args)
    {
        int a,b;
        System.out.print("Enter two numbers a & b:");
        Scanner sc=new Scanner(System.in);
        a=sc.nextInt();
        b=sc.nextInt();
        if(a==0 && b==0)
        {
            System.out.println("0");
        }
        else
        {
           swapfxn(a,b);
           System.out.print("Swapped Values: a=" + a + " b=" + b);
            
        }
    }
    public static void swapfxn(int x,int y)
    {
        x^=y;
        y^=x;
        x^=y;
    }
        
    }
