import java.util.*;

class Solution {
    public double[] convertTemperature(double celsius) {
        return new double[]{celsius + 273.15, celsius * 1.8 + 32};
    }

    public static void main(String[] a) {
        Solution sol = new Solution();
        System.out.println(Arrays.toString(sol.convertTemperature(36.50)));
    }
}
