import java.util.Scanner;

public class BOJ10951 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        while(scanner.hasNextLine()){
            String[] input = scanner.nextLine().split(" ");
            int sum = Integer.parseInt(input[0]) + Integer.parseInt(input[1]);
            System.out.println(sum);
        }

    }
}
