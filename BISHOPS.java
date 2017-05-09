import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

class Main{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc=new Scanner(System.in);
		BigInteger n, bishops;
		while (sc.hasNextBigInteger()){
			n = sc.nextBigInteger();
			bishops = n;
			if (!bishops.equals(BigInteger.ONE)){
				n = n.subtract(BigInteger.valueOf(2));
				bishops = bishops.add(n);
			}
			System.out.println(bishops);
		}
	}
}