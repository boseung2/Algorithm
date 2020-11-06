import java.util.Arrays;
import java.util.Scanner;

public class Q2920 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String inputNum = scanner.nextLine();

        if (inputNum.equals("1 2 3 4 5 6 7 8")) {
            System.out.println("ascending");
        } else if (inputNum.equals("8 7 6 5 4 3 2 1")) {
            System.out.println("descending");
        } else {
            System.out.println("mixed");
        }


    }

//    public class Main {
//        public static void main (String[] args) {
//
//            int[] arrA = {1, 2, 3, 4, 5, 6, 7, 8};
//            int[] arrD = {8, 7, 6, 5, 4, 3, 2, 1};
//
//            Scanner s = new Scanner(System.in);
//            int[] nums = new int[8];
//            for (int i = 0; i < nums.length; i++) {
//                nums[i] = s.nextInt();
//            }
//
//            if (Arrays.equals(nums, arrA)) {
//                System.out.println("ascending");
//            } else if (Arrays.equals(nums, arrD)) {
//                System.out.println("descending");
//            } else {
//                System.out.println("mixed");
//            }
//        }
//    }
}
