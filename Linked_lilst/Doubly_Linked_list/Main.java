package Linked_lilst.Doubly_Linked_list;

class Node {
    public int val;

    public Node next;
    public Node prev;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLinkedList {
    private Node head;
    private Node tail;

    public DoublyLinkedList() {
        this.head = null;
        this.tail = null;
    }

    public void add(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            tail = head;
        } else {
            tail.next = newNode;
            newNode.prev = tail;

            tail = newNode;
        }
    }

    public void print() {
        Node temp = head;

        while (temp != null) {
            System.out.print(temp.val + " ");
            temp = temp.next;
        }
    }

    public void insert(int index, int data) {
        Node temp = head;

        int count = 1;

        while (count < index) {
            temp = temp.next;
            count++;
        }

        temp = temp.prev;

        Node newNode = new Node(data);

        newNode.next = temp.next;
        temp.next.prev = newNode;
        newNode.prev = temp;
        temp.next = newNode;

    }

    public void delete(int val) {

        Node temp = head;

        if (head.val == val) {
            head = head.next;
            if (head != null) {

                head.prev = null;
            }
            return;
        }

        while (temp.val != val) {
            temp = temp.next;
        }

        if (temp.next == null) {
            tail = temp.prev;
            temp.prev.next = null;
            temp = null;
            return;
        }

        temp.prev.next = temp.next;
        temp.next.prev = temp.prev;
    }

}

public class Main {
    public static void main(String[] args) {
        DoublyLinkedList dl = new DoublyLinkedList();

        dl.add(1);
        dl.add(3);
        dl.add(5);
        dl.add(7);
        dl.add(9);

        dl.print();
        System.out.println();
        dl.insert(3, 100);
        dl.print();
        System.out.println();
        dl.insert(2, 900);
        dl.print();
        System.out.println();
        dl.delete(9);
        dl.print();

    }
}
