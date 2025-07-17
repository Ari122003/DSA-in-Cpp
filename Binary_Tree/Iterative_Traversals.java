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

    @Override

    public void postOrder(Node root) {

        Stack<Node> stack1 = new Stack<>();
        Stack<Node> stack2 = new Stack<>();

        stack1.push(root);

        System.out.println("Iterative :");

        while (!stack1.empty()) {

            Node temp = stack1.pop();

            stack2.push(temp);

            if (temp.left != null) {

                stack1.push(temp.left);
            }
            if (temp.right != null) {

                stack1.push(temp.right);
            }
        }

        while (!stack2.empty()) {
            Node p = stack2.pop();

            System.out.print(p.data + " ");
        }

    }

}

public class Iterative_Traversals {
    public static void main(String[] args) {

        IterativeBinaryTree tree = new IterativeBinaryTree();

        tree.create();

        tree.postOrder(tree.root);
    }
}
