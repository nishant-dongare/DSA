#include <iostream>
using namespace std;

class LinkedList{

  private:
    struct node{
      int value;
      struct node * next;
      struct node * prev;
    };
    struct node *head,*tail;

  public:

    void traversal(){
      if(head==NULL) cout<<"Linked List is Empty\n";
      else
        for(struct node * ptr=head ;ptr!=NULL;ptr=ptr->next)
          cout<<" => "<<ptr->value;
    }

    void enqueue(){
      struct node * newNode =(struct node *) malloc(sizeof(struct node));
      cout<<"\nEnter your number : ";
      cin>>newNode->value;
      if(head == NULL){
        newNode->next=NULL;
        newNode->prev=NULL;
        head = newNode;
        tail = newNode;
      }else{
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
      }
    }

    void dequeue(){
      if(head==NULL) cout<<"Linked List is Empty\n";
      else if(head==tail) {
        free(head);
        head=NULL;
        tail=NULL;
      }
      else{
        struct node * ptr;
        for(ptr=head;ptr->next!=tail;ptr=ptr->next);
        ptr->next=NULL;
        free(tail);
        tail=ptr;
      }
    }

    void search(){
      if(head==NULL) cout<<"Linked List is Empty\n";
      else{
        int value,i=1;
        cout<<"\nEnter the element to search: ";
        cin>>value;    
        
        struct node * ptr;
        for(ptr=head;ptr->value!=value && ++i;ptr=ptr->next);
        if(ptr->value==value)
          cout<<"\nElement is found at "<<i<<endl;
        else
          cout<<"\nElement not found\n";
      }
    }

    void removeAll(){
      while(head!=NULL){
        tail=head;
        head=head->next;
        free(tail);
      }
    }
};

int main(){
  LinkedList ll;
  for(int i=1;i>0;){
    cout<<"\n1.Traversal\n2.Enqueue\n3.Dequeue\n4.Search\n5.RemoveAll\n";
    cout<<"\nEnter your choice : ";
    cin>>i;
    switch(i){
      case 1:ll.traversal();
        break;
      case 2:ll.enqueue();
        break;
      case 3:ll.dequeue();
        break;
      case 4:ll.search();
        break;
      case 5:ll.removeAll();
        break;
      default:return 0;
    }
  }
}