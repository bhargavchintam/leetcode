import java.util.*;

class Solution {
    public int matchPlayersAndTrainers(int[] players, int[] trainers) {
        Arrays.sort(players);
        Arrays.sort(trainers);
        int i = 0, j = 0, cnt = 0;
        while (i < players.length && j < trainers.length) {
            if (trainers[j] >= players[i]) {
                cnt++;
                i++;
                j++;
            } else {
                j++;
            }
        }
        return cnt;
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(sol.matchPlayersAndTrainers(new int[]{4, 7, 9}, new int[]{8, 2, 5, 8}));
    }
}
