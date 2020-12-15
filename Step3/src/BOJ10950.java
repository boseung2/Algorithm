//import java.util.Scanner;
//
//public class Q10950 {
//    public static void main(String[] args) {
//        Scanner scanner = new Scanner(System.in);
//
//        int n = scanner.nextInt();
//        int[][] inputNum = new int[n][2];
//        for (int i = 0; i < n; i++) {
//            inputNum[i][0] = scanner.nextInt();
//            inputNum[i][1] = scanner.nextInt();
//        }
//
//        for (int i = 0; i < n; i++) {
//            System.out.println(inputNum[i][0] + inputNum[i][1]);
//        }
//    }
//}

import java.util.Scanner;

public class BOJ10950 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for(int i = 0;  i< T; i++) {
            int A = sc.nextInt();
            int B = sc.nextInt();
            System.out.println(A+B);

        }
        sc.close();
    }

}