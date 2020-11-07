import java.util.Scanner;

public class Q10818 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int num = scanner.nextInt();
        int[] inputArray = new int[num];

        for(int i=0; i<num; i++){
            inputArray[i] = scanner.nextInt();
        }

        int max = inputArray[0];
        int min = inputArray[0];
        for(int i=1; i<num; i++){
            if(inputArray[i] > max){
                max = inputArray[i];
            }
            if(inputArray[i] < min){
                min = inputArray[i];
            }
        }

        System.out.println(min + " " + max);

    }
}
