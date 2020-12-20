import java.io.*;
import java.util.NoSuchElementException;
import java.util.StringTokenizer;

public class BOJ15552 {


    public static void main(String[] args) throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        while (true) {
            try {
                String s = bf.readLine();
                StringTokenizer st = new StringTokenizer(s);
                int a = Integer.parseInt(st.nextToken());
                int b = Integer.parseInt(st.nextToken());
                bw.write(a + b + "");
                bw.newLine();
            } catch (IOException | NoSuchElementException e) {
            }
        }



    }
}