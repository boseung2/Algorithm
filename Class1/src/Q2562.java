import java.util.Scanner;

public class Q2562 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        //배열 입력받음
        int[] inputArray = new int[9];
        for (int i = 0; i < inputArray.length; i++) {
            inputArray[i] = scanner.nextInt();
        }

        int maxNumber = inputArray[0];
        int maxNumberLocation = 1;
        for (int i = 1; i < inputArray.length; i++) {
            if (inputArray[i] > maxNumber) {
                maxNumber = inputArray[i];
                maxNumberLocation = i + 1;
            }
        }

        System.out.println(maxNumber);
        System.out.println(maxNumberLocation);

    }
}
