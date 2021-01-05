import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ2908 {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        String[] input = bf.readLine().split(" ");
        StringBuilder a = null;
        StringBuilder b = null;
        for (int i = input[0].length() - 1; i >= 0; i--) {
            a.append(input[0].charAt(i));
        }
        for (int i = input[1].length() - 1; i >= 0; i--) {
            b.append(input[1].charAt(i));
        }



    }

//    static void changeInput(StringBuilder s) {
//        for (int i = input.length() - 1; i >= 0; i--) {
//            a.append(input.charAt(i));
//        }
//    }
}
