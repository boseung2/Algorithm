import java.util.Scanner;

public class BOJ2577 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        int num = a * b * c;
        int numLength = (int)Math.log10(num) + 1;
        int[] counter = new int[10];

        for (int i = numLength; i > 0; i--) {
            int value = (int) (num / Math.pow(10, i - 1)) ;
            counter[value]++;
            num = (int) (num % Math.pow(10, i - 1));
        }

        for (int i : counter) {
            System.out.println(counter[i]);
        }

        /*
        int sum = a * b * c;
        int[] count = new int[10];
        while (sum > 0){
            count[sum % 10]++;
            sum /= 10;
         */
    }
}
