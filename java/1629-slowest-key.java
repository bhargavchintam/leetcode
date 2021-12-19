import java.util.*;

class Solution {
    public char slowestKey(int[] releaseTimes, String keysPressed) {
        int maxDur = releaseTimes[0];
        char res = keysPressed.charAt(0);
        for (int i = 1; i < releaseTimes.length; i++) {
            int dur = releaseTimes[i] - releaseTimes[i - 1];
            char c = keysPressed.charAt(i);
            if (dur > maxDur || (dur == maxDur && c > res)) {
                maxDur = dur;
                res = c;
            }
        }
        return res;
    }

    public static void main(String[] a) {
        Solution s = new Solution();
        System.out.println(s.slowestKey(new int[]{9,29,49,50}, "cbcd"));
    }
}
