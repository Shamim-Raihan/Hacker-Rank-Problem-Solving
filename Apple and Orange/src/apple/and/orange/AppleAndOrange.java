package apple.and.orange;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.List;
import java.util.Scanner;
import static java.util.stream.Collectors.toList;
import java.util.stream.Stream;

class Result {

    /*
     * Complete the 'countApplesAndOranges' function below.
     *
     * The function accepts following parameters:
     *  1. INTEGER s
     *  2. INTEGER t
     *  3. INTEGER a
     *  4. INTEGER b
     *  5. INTEGER_ARRAY apples
     *  6. INTEGER_ARRAY oranges
     */
    public static void countApplesAndOranges(int s, int t, int a, int b, List<Integer> apples, List<Integer> oranges) {
        // Write your code here
        int applesCount = 0;
        int orangeCount = 0;

        for (int i = 0; i < apples.size(); i++) {
            int applesDistanceChecker = a + apples.get(i);
            if (applesDistanceChecker >= s && applesDistanceChecker <= t) {
                applesCount++;
                applesDistanceChecker = 0;
            }
        }

        for (int i = 0; i < oranges.size(); i++) {
            int orangesDistanceChecker = b + oranges.get(i);
            if (orangesDistanceChecker >= s && orangesDistanceChecker <= t) {
                orangeCount++;
                orangesDistanceChecker = 0;
            }
        }

        System.out.println(applesCount);
        System.out.println(orangeCount);
    }
}

public class AppleAndOrange {

    public static void main(String[] args) throws IOException {

        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        Scanner sc = new Scanner(System.in);

        int s = sc.nextInt();
        int t = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        int m = sc.nextInt();
        int n = sc.nextInt();

        List<Integer> apples = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                .map(Integer::parseInt)
                .collect(toList());

        List<Integer> oranges = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                .map(Integer::parseInt)
                .collect(toList());

        Result result = new Result();
        result.countApplesAndOranges(s, t, a, b, apples, oranges);

    }
}
