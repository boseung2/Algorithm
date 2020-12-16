import java.util.Scanner;

public class BOJ2588 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int firstNum = Integer.parseInt(scanner.nextLine());
        String[] secondNum = scanner.nextLine().split("");
        int sum = 0;
        int count = 1;

        for (int i = secondNum.length - 1; i >= 0; i--) {
            int value = firstNum * Integer.parseInt(secondNum[i]);
            System.out.println(value);
            sum += value * count;
            count *= 10;
        }
        System.out.println(sum);
    }
}
