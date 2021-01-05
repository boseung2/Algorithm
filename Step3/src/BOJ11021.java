import java.io.*;

public class BOJ11021 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int count = 1;
        int num = Integer.parseInt(br.readLine());

        for(int i=0; i<num; i++) {
            String s = br.readLine();
            String[] input = s.split(" ");
            int value = Integer.parseInt(input[0]) + Integer.parseInt(input[1]);
            bw.write("Case #" + count++ + ": " + value + "\n");
        }
        bw.flush();
        bw.close();
        br.close();
    }
}
