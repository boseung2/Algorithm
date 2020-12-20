import java.util.Arrays;
import java.util.Scanner;

public class BOJ1546 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int count = scanner.nextInt();
        double[] inputNum = new double[count];
        double sum = 0;

        for (int i = 0; i < inputNum.length; i++) {
            inputNum[i] = scanner.nextDouble();
        }

        Arrays.sort(inputNum);
        for (int i=0; i<inputNum.length; i++) {
            sum += inputNum[i] / inputNum[inputNum.length - 1] * 100;
        }
        System.out.println(sum / inputNum.length);


    }
}
