import java.util.*;

class Solution {
    public ListNode removeNodes(ListNode head) {
        if (head == null) return null;
        head.next = removeNodes(head.next);
        if (head.next != null && head.next.val > head.val) return head.next;
        return head;
    }

    public static void main(String[] a) {
        ListNode head = new ListNode(5);
        head.next = new ListNode(2);
        head.next.next = new ListNode(13);
        head.next.next.next = new ListNode(3);
        head.next.next.next.next = new ListNode(8);
        Solution sol = new Solution();
        ListNode res = sol.removeNodes(head);
        StringBuilder sb = new StringBuilder();
        while (res != null) {
            sb.append(res.val).append(" ");
            res = res.next;
        }
        System.out.println(sb.toString().trim());
    }
}

class ListNode {
    int val;
    ListNode next;
    ListNode(int val) { this.val = val; }
}
