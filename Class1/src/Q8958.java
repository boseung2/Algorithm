import java.util.Scanner;

public class Q8958 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int num = scanner.nextInt();
        String[] inputString = new String[num];
        int[] answer = new int[num];

        //string 배열 입력
        for (int i = 0; i < num; i++) {
            inputString[i] = scanner.next();
        }


        for (int i = 0; i < inputString.length; i++) {
            int score = 0;
            int charNum = 0;
            // inputString 각 배열마다의 점수
            while (true) {
                if(charNum == inputString[i].length()){
                    break;
                }

                if (inputString[i].charAt(charNum) == 'O') {
                    score++;
                }
                if (inputString[i].charAt(charNum) == 'X') {
                    score = 0;
                }
                answer[i] += score;
                charNum++;
            }
        }

        for (int i = 0; i < num; i++) {
            System.out.println(answer[i]);
        }


    }
}
