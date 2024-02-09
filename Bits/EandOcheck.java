import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		int x;
		Scanner sc = new Scanner(System.in);
		x=sc.nextInt();
		if((x&1)==1)
		{
		    System.out.println(x+" is an odd number");
		}
		else
		{
		     System.out.println(x +" is an even number");
		}
	}
}
