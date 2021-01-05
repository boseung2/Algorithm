import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ4344 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int c = Integer.parseInt(br.readLine());
        for (int i = 0; i < c; i++) {
            int count = 0;
            int sum = 0;

            String[] input = br.readLine().split(" ");
            int length = Integer.parseInt(input[0]);
            int[] inputNumArr = new int[length];
            for (int j = 0; j < inputNumArr.length; j++) {
                inputNumArr[j] = Integer.parseInt(input[j + 1]);
                sum += inputNumArr[j];
            }
            float average = sum / (float) length;

            for(int j=0; j<inputNumArr.length; j++) {
                if (inputNumArr[j] > average)
                    count++;
            }
            float percent = Math.round(count / (float)length * 100 * 1000) / 1000f;
            String percentString = String.format("%.3f", percent);
            System.out.println(percentString + "%");
        }
    }
}
