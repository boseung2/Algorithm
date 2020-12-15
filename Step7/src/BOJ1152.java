import java.util.Scanner;

public class BOJ1152 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String sentenceString = scanner.nextLine();
        int count = 0;

        if(sentenceString.equals(" ")){
            count = -1;
        }

        for (int i = 1; i < sentenceString.length() - 1; i++) {
            if (sentenceString.charAt(i) == ' ') {
                count++;
            }
        }

        System.out.println(count+1);
    }
}