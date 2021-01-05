import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ1157 {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        char[] s = bf.readLine().toCharArray();

        int[] alphabet = new int[26];
        for (int i = 0; i < s.length; i++) {
            s[i] = s[i] >= 'a' ? (char) (s[i] - ('a' - 'A')) : s[i];
            alphabet[s[i] - 'A']++;
        }

        int maxIndex = 0;
        for (int i = 0; i < alphabet.length; i++) {
            if (alphabet[i] > alphabet[maxIndex]) {
                maxIndex = i;
            }
        }

        int count = 0;
        for (int i = 0; i < alphabet.length; i++) {
            if(alphabet[maxIndex] == alphabet[i]){
                count++;
            }
        }

        System.out.println(count > 1 ? "?" : (char) (maxIndex + 'A'));


    }
}
