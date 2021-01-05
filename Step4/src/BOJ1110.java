import java.util.Scanner;

public class BOJ1110 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int count = 0;
        int temp;
        int tempA = 0;
        int tempB = 0;
        String n = scanner.nextLine();
        n = n.length() == 1 ? "0" + n : n;
        String[] num = n.split("");
        int a = Integer.parseInt(num[0]);
        int b = Integer.parseInt(num[1]);
        while (true) {
            if(count != 0) {
                temp = tempA;
                tempA = tempB;
                tempB = (temp + tempB) % 10;
            }else{
                temp = a;
                tempA = b;
                tempB = (temp + b) % 10;
            }
            count++;
            if(a * 10 + b == tempA * 10 + tempB){
                System.out.println(count);
                break;
            }
        }

    }
}
