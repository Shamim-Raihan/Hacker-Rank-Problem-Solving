package breaking.the.records;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import static java.util.stream.Collectors.toList;
import java.util.stream.Stream;

class Result {

    public static List<Integer> result = new ArrayList<Integer>();
    public static int highScoreCount = 0;
    public static int lowScoreCount = 0;

    public static List<Integer> breakingRecords(List<Integer> scores) {
        int highScore = scores.get(0);
        int lowScore = scores.get(0);

        for (int i = 0; i < scores.size() - 1; i++) {

            if (scores.get(i + 1) > highScore) {
                highScore = scores.get(i + 1);
                highScoreCount++;
            }

        }

        for (int i = 0; i < scores.size() - 1; i++) {
            if (scores.get(i + 1) < lowScore) {
                lowScore = scores.get(i + 1);
                lowScoreCount++;
            }
        }

        result.add(highScoreCount);
        result.add(lowScoreCount);
        System.out.println(highScoreCount);

        return result;
    }
}


public class BreakingTheRecords {

    public static void main(String[] args) throws IOException {
       
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        List<Integer> scores = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                .map(Integer::parseInt)
                .collect(toList());

        Result result = new Result();
        List<Integer> finalResult = result.breakingRecords(scores);
        System.out.println(finalResult);
    }
}
