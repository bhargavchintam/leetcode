import java.util.*;

class NumArray {
    private int[] tree;
    private int[] nums;
    private int n;

    public NumArray(int[] nums) {
        this.n = nums.length;
        this.nums = new int[n];
        this.tree = new int[n + 1];
        for (int i = 0; i < n; i++) {
            update(i, nums[i]);
        }
    }

    public void update(int index, int val) {
        int delta = val - nums[index];
        nums[index] = val;
        for (int i = index + 1; i <= n; i += i & (-i)) {
            tree[i] += delta;
        }
    }

    private int prefixSum(int i) {
        int sum = 0;
        for (; i > 0; i -= i & (-i)) {
            sum += tree[i];
        }
        return sum;
    }

    public int sumRange(int left, int right) {
        return prefixSum(right + 1) - prefixSum(left);
    }

    public static void main(String[] a) {
        int[] nums = {1, 3, 5};
        NumArray na = new NumArray(nums);
        System.out.println(na.sumRange(0, 2));
        na.update(1, 2);
        System.out.println(na.sumRange(0, 2));
    }
}
