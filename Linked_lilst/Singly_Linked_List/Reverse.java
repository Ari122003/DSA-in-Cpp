
class Node {
    public int val;
    public Node next;

    Node(int val, Node node) {
        this.val = val;
        this.next = node;
    }
}

class LinkedList {
    private Node head;
    private Node tail;

    LinkedList() {
        head = null;
        tail = null;
    }

    public void push(int val) {
        Node newNode = new Node(val, null);

        if (head == null) {
            head = newNode;
            tail = newNode;
            return;
        }

        tail.next = newNode;
        tail = tail.next;
    }

    public void display() {
        Node temp = head;

        while (temp != null) {
            System.out.print(temp.val + " ");
            temp = temp.next;
        }

    }

    void reverse() {

        Node temp = head;
        Node prev = null;
        Node front = null;

        while (temp != null) {
            front = temp.next;
            temp.next = prev;
            prev = temp;
            temp = front;

        }
        head = prev;

    }

    private Node rec(Node temp, Node prev) {
        if (temp == null) {
            return prev;
        }

        Node front = temp.next;

        temp.next = prev;

        return rec(front, temp);

    }

    public void recursiveRev() {

        head = rec(head, null);

    }

}

public class Reverse {
    public static void main(String[] args) {

        LinkedList ll = new LinkedList();

        ll.push(2);
        ll.push(4);
        ll.push(6);
        ll.push(8);
        ll.push(10);

        ll.display();
        ll.reverse();
        System.out.println();
        ll.display();
    }
}