package ty202308.week1;

import entity.ListNode;

public class SwapPair {
    //    给你一个链表，两两交换其中相邻的节点，并返回交换后链表的头节点。你必须在不修改节点内部的值的情况下完成本题（即，只能进行节点交换）。
    public static void main(String[] args) {
        ListNode q1 = new ListNode(1);
        ListNode q2 = new ListNode(2);
        ListNode q3 = new ListNode(3);
        ListNode q4 = new ListNode(4);
        q1.next = q2;
        q2.next = q3;
        q3.next = q4;

        SwapPair swapPair = new SwapPair();
        swapPair.swapPairs(q1);
    }

    // 1->2->3->4
    public ListNode swapPairs(ListNode head) {
        ListNode preHead = new ListNode(0);
        preHead.next = head;
        ListNode tmp = preHead;

        while (tmp.next != null && tmp.next.next != null) {
            ListNode l1 = tmp;
            ListNode l2 = tmp.next;
            ListNode l3 = tmp.next.next;

            l2.next = l3.next;
            l1.next = l3;
            l3.next = l2;

            tmp = l2;

        }
        return preHead.next;
    }
}
