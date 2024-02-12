import java.util.Scanner;
public class Main{
public static void main(String[] args)
{
int n;
System.out.println("Enter the number:");
Scanner sc=new Scanner(System.in);
n=sc.nextInt();
if(n==0)
{
System.out.print("Undefined!");
}
else
{
int N=(int)(Math.log(n)/Math.log(2));// gives position of MSB in number
int value = (int) Math.pow(2,N);
System.out.println("Position of MSB:"+N);
System.out.println("Value of MSb:"+value);
}
}
}
