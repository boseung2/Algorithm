import java.util.Scanner;

public class BOJ11720 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int num = scanner.nextInt();
        String input = scanner.next();
        char[] answer = new char[num];
        int sum = 0;

        answer = input.toCharArray();

        for(int i=0; i<answer.length; i++){
            sum += answer[i]-'0';
        }

        System.out.println(sum);
    }
}

