package Binary_Tree;

import java.util.Stack;

class IterativeBinaryTree extends BinaryTree {

    @Override
    public void preOrder(Node root) {
        Stack<Node> stack = new Stack<>();

        stack.push(root);

        System.out.println("Iterative :");
        while (!stack.empty()) {

            Node temp = stack.peek();

            System.out.print(temp.data + " ");
            stack.pop();

            if (temp.right != null) {
                stack.push(temp.right);
            }
            if (temp.left != null) {
                stack.push(temp.left);
            }
        }

    }

    @Override
    public void inOrder(Node temp) {
        Stack<Node> stack = new Stack<>();

        while (temp != null || !stack.empty()) {

            while (temp != null) {
                stack.push(temp);
                temp = temp.left;
            }

            temp = stack.pop();

            System.out.print(temp.data);

            temp = temp.right;

        }

    }

}

public class Iterative_Traversals {
    public static void main(String[] args) {

        IterativeBinaryTree tree = new IterativeBinaryTree();

        tree.create();

        tree.inOrder(tree.root);
    }
}
