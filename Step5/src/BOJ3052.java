import java.util.Arrays;
import java.util.Scanner;

public class BOJ3052 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] inputNum = new int[10];
        int count = 1;

        for (int i = 0; i < 10; i++) {
            inputNum[i] = scanner.nextInt() %  42;
        }

        Arrays.sort(inputNum);

        for(int i=0; i<inputNum.length - 1; i++) {
            if(inputNum[i] != inputNum[i + 1]) {
                count++;
            }
        }
        System.out.println(count);
    }
}
