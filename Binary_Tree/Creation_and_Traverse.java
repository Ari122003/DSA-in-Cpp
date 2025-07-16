package Binary_Tree;

class Node {
    int data;
    Node left, right;

    public Node(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

class BinaryTree {
    public Node root;

    public BinaryTree() {
        this.root = null;
    }

    public void create() {
        this.root = new Node(1);
        this.root.left = new Node(2);
        this.root.right = new Node(3);
        this.root.left.left = new Node(4);
        this.root.left.right = new Node(5);
        this.root.right.left = new Node(6);
        this.root.right.right = new Node(7);
    }

    public void preOrder(Node temp) {
        if (temp == null) {
            return;
        }

        System.out.print(temp.data + " ");

        preOrder(temp.left);
        preOrder(temp.right);
    }

    public void postOrder(Node temp) {
        if (temp == null) {
            return;
        }

        postOrder(temp.left);
        postOrder(temp.right);

        System.out.print(temp.data + " ");
    }

    public void inOrder(Node temp) {
        if (temp == null) {
            return;
        }

        inOrder(temp.left);

        System.out.print(temp.data + " ");

        inOrder(temp.right);

    }
}

public class Creation_and_Traverse {
    public static void main(String[] args) {

        BinaryTree tree = new BinaryTree();

        tree.create();

        tree.postOrder(tree.root);
    }
}
