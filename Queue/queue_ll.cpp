#include <iostream>
using namespace std;

void traversal();
void enqueue();
void dequeue();
void search();
void removeAll();

struct node{
  int value;
  struct node * next;
};

struct node * head,* tail;

int main(){
  for(int i=1;i>0;){
    cout<<"\n1.Traversal\n2.Enqueue\n3.Dequeue\n4.Search\n5.RemoveAll\n";
    cout<<"\nEnter your choice : ";
    cin>>i;
    switch(i){
      case 1:traversal();
        break;
      case 2:enqueue();
        break;
      case 3:dequeue();
        break;
      case 4:search();
        break;
      case 5:removeAll();
        break;
      default:return 0;
    }
  }
}



void traversal(){
  if(head==NULL) cout<<"Queue is Empty\n";
  for(struct node * ptr=head ;ptr!=NULL;ptr=ptr->next)
    cout<<" => "<<ptr->value;
}

void enqueue(){
  struct node * newNode =(struct node *) malloc(sizeof(struct node));
  cout<<"\nEnter your number : ";
  cin>>newNode->value;
  if(head == NULL){
    newNode->next=NULL;
    head = newNode;
    tail = newNode;
  }else{
    tail->next=newNode;
    tail=newNode;
  }
}

void dequeue(){
  if(head==NULL) cout<<"Queue is Empty\n";
  else{
    struct node * ptr;
    for(ptr=head;ptr->next!=tail;ptr=ptr->next);
    free(tail);
    tail=ptr;
    tail->next=NULL;
  }
}

void search(){
  if(head==NULL) cout<<"Queue is Empty\n";
  else{
    int value,i=1;
    cout<<"\nEnter the Element : ";
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
    head=tail;
    head=head->next;
    free(tail);
  }
}

