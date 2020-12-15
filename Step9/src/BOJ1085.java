import java.util.Scanner;

public class BOJ1085 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int x = scanner.nextInt();
        int y = scanner.nextInt();
        int w = scanner.nextInt();
        int h = scanner.nextInt();

        int[] distance = new int[4];
        distance[0] = x;
        distance[1] = y;
        distance[2] = w-x;
        distance[3] = h-y;

        int min = distance[0];
        for(int i=1; i<distance.length; i++){
            if(distance[i] < min){
                min = distance[i];
            }
        }
        System.out.println(min);

    }
}
