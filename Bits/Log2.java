import java.util.Scanner;
public class Main{
    public static void main(String[] args)
    {
        int n;
        System.out.print("Enter the number for calculation log base 2:");
        Scanner num=new Scanner(System.in);
        n=num.nextInt();
        if(n<=0)
        {
            System.out.println("Undefined Error!");
        }
        else if(n==1)
        {
            System.out.println("0");
        }
        else{
            int a=log2(n);
            System.out.println(a);
        }
    }
    public static int log2(int x)
    {
        int res=0;
        while(x>1)
        {
            x>>=1;
            res++;
        }
        return res;
    }
    
}
