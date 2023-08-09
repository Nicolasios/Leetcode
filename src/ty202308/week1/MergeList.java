package ty202308.week1;

import entity.ListNode;

public class MergeList {

    //    将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
    public static void main(String[] args) {
        ListNode l1 = new ListNode(1);
        ListNode l2 = new ListNode(2);
        ListNode l4 = new ListNode(4);
        ListNode r1 = new ListNode(1);
        ListNode r3 = new ListNode(3);
        ListNode r4 = new ListNode(4);
        l1.next = l2;
        l2.next = l4;
        r1.next = r3;
        r3.next = r4;
        MergeList mergeList = new MergeList();
        ListNode listNode = mergeList.mergeTwoLists(l1, r1);
        while (listNode!=null){
            System.out.println(listNode.val);
            listNode = listNode.next;
        }
    }

    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode point1 = list1;
        ListNode point2 = list2;
        //初始化头结点
        ListNode head = new ListNode();
        ListNode tmp = head;

        ListNode listNode;
        while (point1!=null && point2 != null) {
            if(point2.val > point1.val){
                listNode = new ListNode(point1.val);
                point1 = point1.next;
            }else {
                listNode = new ListNode(point2.val);
                point2 = point2.next;
            }
            tmp.next = listNode;
            tmp = tmp.next;
        }
        if(point1!=null){
            tmp.next = point1;
        }if(point2!=null){
            tmp.next = point2;
        }
        return head.next;
    }

}

