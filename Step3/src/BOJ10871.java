import java.io.*;

public class BOJ10871 {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String[] input = bf.readLine().split(" ");
        String[] nums = bf.readLine().split(" ");

        for (int i = 0; i < nums.length; i++) {
            if(Integer.parseInt(nums[i]) < Integer.parseInt(input[1])){
                bw.write(nums[i] + " ");
            }
        }
        bw.flush();
        bw.close();


    }
}
