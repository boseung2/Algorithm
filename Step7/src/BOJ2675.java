import java.util.Scanner;

public class BOJ2675 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int num = scanner.nextInt();
        int[] repeatNum = new int[num];
        String[] inputString = new String[num];
        char[][] outputArray = new char[num][];

        for(int i=0; i<num; i++){
            repeatNum[i] = scanner.nextInt();
            inputString[i] = scanner.next();
            outputArray[i] = new char[inputString[i].length() * repeatNum[i]];
        }
        //repeat each line
        for(int i=0; i<num; i++){
            //repeat in the String
            for(int j=0; j<inputString[i].length() * repeatNum[i]; j++){
                outputArray[i][j] = inputString[i].charAt(j / repeatNum[i]);
            }
        }

        for(int i=0; i<num; i++){
            for(int j=0; j<inputString[i].length() * repeatNum[i]; j++){
                System.out.print(outputArray[i][j]);
            }
            System.out.println();
        }

    }
}
