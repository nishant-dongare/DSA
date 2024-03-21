public class Tree {
  /**
   * Node
   */
  static class Node {
    int data;
    Node left, right;

    public Node(int data) {
      this.data = data;
    }
  }

  Node root = null;

  public void insert(int data) {
    if (root == null) {
      root = new Node(data);
      return;
    }
    Node ptr = root, lastptr = ptr;
    while (ptr != null) {
      lastptr = ptr;
      if (data < ptr.data) {
        ptr = ptr.left;
      } else if (data > ptr.data) {
        ptr = ptr.right;
      } else {
        System.out.println("Node is Already Present");
        return;
      }
    }
    if (data < lastptr.data) {
      lastptr.left = new Node(data);
    } else {
      lastptr.right = new Node(data);
    }
    System.out.println(data + " Inserted");

  }

  public void traversal() {
    if (root == null) {
      System.out.println("Tree is null");
    } else {
      traversalRec(root);
    }
  }

  private void traversalRec(Tree.Node ptr) {

    if (ptr.left != null) {
      traversalRec(ptr.left);
    }
    if (ptr.right != null) {
      traversalRec(ptr.right);
    }
    System.out.print("=>" + ptr.data);

  }

  public static void main(String[] args) {
    Tree tree = new Tree();
    int[] nodeValues = { 50, 30, 70, 20, 40, 60, 80, 30 };
    for (int value : nodeValues) {
      tree.insert(value);
    }
    tree.traversal();

  }

}
