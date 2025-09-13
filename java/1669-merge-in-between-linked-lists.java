import java.util.*;

class Solution {
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        ListNode before = list1;
        for (int i = 0; i < a - 1; i++) before = before.next;
        ListNode after = before;
        for (int i = 0; i < b - a + 2; i++) after = after.next;
        before.next = list2;
        ListNode tail = list2;
        while (tail.next != null) tail = tail.next;
        tail.next = after;
        return list1;
    }

    public static void main(String[] a) {
        ListNode l1 = new ListNode(0);
        l1.next = new ListNode(1);
        l1.next.next = new ListNode(2);
        l1.next.next.next = new ListNode(3);
        l1.next.next.next.next = new ListNode(4);
        l1.next.next.next.next.next = new ListNode(5);
        ListNode l2 = new ListNode(1000000);
        l2.next = new ListNode(1000001);
        l2.next.next = new ListNode(1000002);
        Solution s = new Solution();
        ListNode res = s.mergeInBetween(l1, 3, 4, l2);
        StringBuilder sb = new StringBuilder();
        while (res != null) { sb.append(res.val).append(" "); res = res.next; }
        System.out.println(sb.toString().trim());
    }
}

class ListNode {
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}
