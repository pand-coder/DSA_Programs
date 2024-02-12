import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		int n;
		System.out.print("Enter the number:");
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int k;
		System.out.print("Enter the bit position:");
		k=sc.nextInt();
		int x=0;
		x=(1<<(k-1));
		if((n&x)!=0)
		{
		  System.out.print("Yes");  
		}
		else
		{
		    System.out.print("No");
		}
	}
}
