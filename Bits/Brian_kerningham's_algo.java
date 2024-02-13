//Brian Kerningham's Algorithm O(1) is number is power of 2//
import java.util.Scanner;
class Main{
    public static void main(String[] args) {
        int n;
        Scanner in=new Scanner(System.in);
        n=in.nextInt();
        if(n<=0)
        {
            System.out.print("Not a power of 2");
            return;
        }
        int count=0;
        while(n>0)
        {
            n= n & (n-1);
            count++;
        }
       System.out.println("Number of set bits: " + count);
        }
    }
