
class Node {
    public int data;
    public Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }

}

class CircularLL {

    Node head;
    Node tail;

    public CircularLL() {
        head = null;
        tail = null;
    }

    public void add(int data) {
        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
            tail = newNode;
        } else {
            tail.next = newNode;
            tail = tail.next;
        }
        tail.next = head;
    }

    public void print() {
        Node temp = head;

        do {
            System.out.print(temp.data + " ");
            temp = temp.next;
        } while (temp != head);
    }

    public void insert(int pos, int val) {

        Node temp = head;

        for (int i = 0; i < pos - 1; i++) {
            temp = temp.next;
        }

        Node newNode = new Node(val);

        newNode.next = temp.next;
        temp.next = newNode;

    }

}

public class CircularLinkedList {

    public static void main(String[] args) {

        CircularLL cl = new CircularLL();

        cl.add(1);
        cl.add(3);
        cl.add(5);
        cl.add(7);
        cl.add(9);
        cl.add(11);

        cl.print();
        System.out.println();
        cl.insert(4, 100);
        cl.print();

    }

}
