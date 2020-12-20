import java.io.*;

public class BOJ2742 {
    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(bf.readLine());
        for (int i = n; i > 0; i--) {
            bw.write(i + "\n");
        }
        bw.flush();
        bw.close();

    }
}
