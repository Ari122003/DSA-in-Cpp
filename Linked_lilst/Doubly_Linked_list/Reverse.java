package Linked_lilst.Doubly_Linked_list;

class DLLNode {
    int data;
    DLLNode next;
    DLLNode prev;

    DLLNode(int val) {
        data = val;
        next = null;
        prev = null;
    }
}

public class Reverse {
    public DLLNode reverseDLL(DLLNode head) {
        // Your code here

        if (head == null || head.next == null) {
            return head;
        }

        DLLNode newHead = reverseDLL(head.next);

        newHead.prev = null;

        head.next.next = head;

        head.prev = head.next;

        head.next = null;

        return newHead;
    }
}
