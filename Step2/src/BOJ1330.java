import java.util.Scanner;

public class BOJ1330 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();

        if( a > b)
            System.out.println(">");
        if( a < b)
            System.out.println("<");
        if( a == b)
            System.out.println("==");
    }
}
