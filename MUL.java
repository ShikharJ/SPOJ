import java.util.Scanner;
import java.math.BigInteger;

class Main {
    public static void main(String[] args) {
        Main solve = new Main();
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        BigInteger a, b;       
        while (n-- > 0){
            a = scan.nextBigInteger();
            b = scan.nextBigInteger();
            System.out.println(a.multiply(b));
        }
    }
}