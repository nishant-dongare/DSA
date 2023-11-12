class LinkedList {
  Node head = null, tail = null;

  static class Node {
    int val;
    Node next = null;

    public Node(int val, Node next) {
      this.val = val;
      this.next = next;
    }

  }

  void append(int val) {
    Node newNode = new Node(val, null);
    if (head == null) {
      head = newNode;
      tail = newNode;
    } else {
      tail.next = newNode;
      tail = newNode;
    }
  }

  void traversal() {
    Node temp;
    if (head == null)
      System.out.println("Linked List is Empty\n");
    else
      for (temp = head; temp != null; temp = temp.next)
        System.out.print(" => " + temp.val);
  }

  void remove() {
    if (head == null)
      System.out.println("Linked List is Empty\n");
    else if (head == tail) {
      System.out.println(head.val + " is removed");
      head = null;
      tail = null;
    } else {
      Node temp;
      for (temp = head; temp.next != tail; temp = temp.next)
        ;
      temp.next = null;
      tail = null;
      tail = temp;
      System.out.print("\n" + head.val + " is removed");

    }
  }

  public static void main(String[] args) {
    LinkedList ll = new LinkedList();
    ll.append(1);
    ll.append(2);
    ll.append(3);
    ll.traversal();
    ll.remove();
    ll.traversal();

    LinkedList.Node newn = ll.head;
    System.out.println(newn);

  }
}