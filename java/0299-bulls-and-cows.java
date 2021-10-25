import java.util.*;

class Solution {
    public String getHint(String secret, String guess) {
        int bulls = 0;
        int cows = 0;
        int[] secretCnt = new int[10];
        int[] guessCnt = new int[10];
        for (int i = 0; i < secret.length(); i++) {
            char s = secret.charAt(i);
            char g = guess.charAt(i);
            if (s == g) {
                bulls++;
            } else {
                secretCnt[s - '0']++;
                guessCnt[g - '0']++;
            }
        }
        for (int i = 0; i < 10; i++) {
            cows += Math.min(secretCnt[i], guessCnt[i]);
        }
        return bulls + "A" + cows + "B";
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.getHint("1807", "7810"));
    }
}
