package Linked_lilst.Doubly_Linked_list;

class Node {
    int data;
    Node next;
    Node prev;

    Node(int data) {
        this.data = data;
        next = prev = null;
    }
}

public class Delete_All_occurances {
    static Node deleteAllOccurOfX(Node head, int x) {
        // Write your code here

        Node temp = head;

        while (temp != null) {
            if (temp.data == x) {

                if (temp == head) {
                    if (head.next == null) {
                        return null;
                    }

                    head = head.next;
                    head.prev = null;
                    temp = head;

                    continue;
                }

                else if (temp.next == null) {
                    temp.prev.next = null;
                    return head;
                }

                temp.prev.next = temp.next;
                temp.next.prev = temp.prev;

            }
            temp = temp.next;
        }

        return head;
    }
}
