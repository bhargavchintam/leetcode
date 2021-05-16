import java.util.*;

class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        ListNode first = head;
        for (int i = 1; i < k; i++) first = first.next;
        ListNode second = head;
        ListNode runner = first;
        while (runner.next != null) { runner = runner.next; second = second.next; }
        int tmp = first.val;
        first.val = second.val;
        second.val = tmp;
        return head;
    }

    public static void main(String[] a) {
        ListNode head = new ListNode(1);
        head.next = new ListNode(2);
        head.next.next = new ListNode(3);
        head.next.next.next = new ListNode(4);
        head.next.next.next.next = new ListNode(5);
        Solution s = new Solution();
        ListNode res = s.swapNodes(head, 2);
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
