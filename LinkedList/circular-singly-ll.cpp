#include <iostream>
using namespace std;

class CircularLinkedList{

  private:
    struct node{
      int value;
      struct node * next;
    };
    struct node * head=NULL,* tail=NULL,* ptr=NULL;
    int size=0;

  public:

    void traversal(){
      if(head==NULL) cout<<"Linked List is Empty\n";
      else if(head==tail) cout<<" => "<<head->value;
      else{
        for(ptr=head;ptr->next!=head;ptr=ptr->next)
          cout<<" => "<<ptr->value;
        cout<<" => "<<ptr->value;
      }
    }

    void enqueue(){
      struct node * newNode =(struct node *) malloc(sizeof(struct node));
      cout<<"\nEnter your number : ";
      cin>>newNode->value;
      if(head == NULL){
        newNode->next=NULL;
        head = newNode;
      }else{
        tail->next=newNode;
        newNode->next=head;
      }
      tail = newNode;
      size++;
    }

    void dequeue(){
      if(head==NULL) cout<<"Linked List is Empty\n";
      else if(head==tail) {
        free(head);
        head=NULL;
        tail=NULL;
        size--;
      }
      else{
        struct node * ptr;
        for(ptr=head;ptr->next!=tail;ptr=ptr->next);
        ptr->next=NULL;
        free(tail);
        tail=ptr;
        size--;
      }
    }

    void search(){
      if(head==NULL) cout<<"Linked List is Empty\n";
      else{
        int value,i=1;
        cout<<"\nEnter the Element to search: ";
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

    void structure(){
      if(head==NULL) cout<<"Linked List is Empty\n";
      else if(head==tail) cout<<" => "<<head->value;
      else{
        for(ptr=head;ptr->next!=head;ptr=ptr->next)
          cout<<ptr<<" => "<<ptr->value<<" "<<ptr->next<<endl;
        cout<<ptr<<" => "<<ptr->value<<" "<<ptr->next<<endl;
      }
    }

};

int main(){
  CircularLinkedList ll;
  for(int i=1;i>=0;){
    cout<<"\n1.Traversal\n2.Enqueue\n3.Dequeue\n4.Search\n5.RemoveAll\n";
    cout<<"\nEnter your choice : ";
    cin>>i;
    switch(i){
      case 0:ll.structure();
        break;
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