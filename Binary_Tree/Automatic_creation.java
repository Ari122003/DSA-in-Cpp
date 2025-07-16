package Binary_Tree;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class AutomaticBinaryTree {
    Node root;

    AutomaticBinaryTree() {
        this.root = null;
    }

    public void preOrder(Node temp) {
        if (temp == null) {
            return;
        }

        System.out.print(temp.data + " ");

        preOrder(temp.left);
        preOrder(temp.right);
    }
}

public class Automatic_creation {
    public static void main(String[] args) {

        // declare variables
        int x;

        Node p, temp;

        // queue to store
        Queue<Node> queue = new LinkedList<>();

        // take the root from user
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter root : ");
        x = sc.nextInt();

        // create the roor and assign value

        AutomaticBinaryTree tree = new AutomaticBinaryTree();

        tree.root = new Node(x);

        // push the root in the queue

        queue.add(tree.root);

        // repeat

        while (!queue.isEmpty()) {

            p = queue.remove();

            System.out.print("Enter left child of " + p.data + ": ");
            x = sc.nextInt();

            if (x != -1) {

                temp = new Node(x);

                p.left = temp;

                queue.add(temp);
            }
            System.out.print("Enter right child of " + p.data + ": ");
            x = sc.nextInt();

            if (x != -1) {

                temp = new Node(x);

                p.right = temp;

                queue.add(temp);
            }

        }

        tree.preOrder(tree.root);

    }
}
