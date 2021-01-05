import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ10809 {
    public static void main(String[] args) throws IOException {
        int[] answer = new int[26];

        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        String s = bf.readLine();

        for (int i = 0; i < answer.length; i++) {
            answer[i] = s.indexOf('a' + i);
        }

        for (int i = 0; i < answer.length; i++) {
            System.out.print(answer[i] + " ");
        }

    }
}
