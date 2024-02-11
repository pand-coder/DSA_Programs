import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        int n;
        System.out.print("Enter n:");
        Scanner sc= new Scanner(System.in);
		n=sc.nextInt();
		boolean b= power(n);
		System.out.print(b);
    }
    public static boolean power(int n)
    {
        	if(n==0)
		{
		    System.out.print("undefined");
		    return false;
		}
		return (int) (Math.ceil((Math.log(n)/Math.log(2))))==((Math.log(n)/Math.log(2)));
    }
}


// Normal Approach
/*
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		int n;
		System.out.print("Enter n:");
		Scanner sc= new Scanner(System.in);
		n=sc.nextInt();
		if(n<=0)
		{
		    System.out.print("Number must be positive");
		}
		else
		{
		    while(n%2==0)
		    {
		        n=n/2;
		    }
		
		if(n==1)
		{
		    System.out.print("Yes, It is a power of 2\n");
		}
		else
		{
		    System.out.print("No the number is not a power of 2\n");
		}
	}
	}
}
*/
