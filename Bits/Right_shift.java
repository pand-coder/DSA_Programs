// Bitwise Right Shift Operator 
public class Main
{
	public static void main(String[] args) {
		int x=33;
		System.out.println(x>>1); // 33/2^1 = 16
		System.out.println(x>>2); // 33/2^2 = 8
		int y=4;
		int z=(x>>y); // 33/2^4 = 2
		System.out.println(z);
	}
}
