package ty202308.week1;

import entity.ListNode;

public class ResortList {
    //    给定一个单链表L的头节点 head，单链表L表示为:
//    L0-L1-...-Ln-1-Ln
//    请将其重新排列后变为:
//    L0-Ln-L1-Ln-1-L2-Ln-2-..
//    不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换
    public static void main(String[] args) {
        ListNode l1 = new ListNode(1);
        ListNode l2 = new ListNode(2);
        ListNode l3 = new ListNode(3);
        ListNode l4 = new ListNode(4);
        ListNode l5 = new ListNode(5);
        ListNode l6 = new ListNode(6);
//        ListNode l7 = new ListNode(7);
        l1.next = l2;
        l2.next = l3;
        l3.next = l4;
        l4.next = l5;
        l5.next = l6;
//        l6.next = l7;

        ListNode head1 = l1;
        while (head1 != null) {
            System.out.print(head1.val + " ");
            head1 = head1.next;
        }
        System.out.println();
        reorderList(l1);
        ListNode head = l1;
        while (head != null) {
            System.out.print(head.val + " ");
            head = head.next;
        }
    }

    public static void reorderList(ListNode head) {
        if (head == null || head.next == null) {
            return;
        }
        ListNode tail2 = head;
        ListNode tail = head.next;
        while (tail.next != null) {
            tail2 = tail2.next;
            tail = tail2.next;
        }

        tail2.next = null;

        ListNode tmp = head.next;
        head.next = tail;
        tail.next = tmp;

        head = tail.next;
        reorderList(head);
    }

}