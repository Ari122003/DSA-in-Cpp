
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
}

public class Create_and_display {

    public static void main(String[] args) {

        CircularLL cl = new CircularLL();

        cl.add(1);
        cl.add(3);
        cl.add(5);
        cl.add(7);
        cl.add(9);
        cl.add(11);

        cl.print();

    }

}
