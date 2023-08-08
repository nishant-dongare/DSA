#include<iostream>
using namespace std;

void traversal();
void enqueue();
void dequeue();
void search();
void removeAll();

int front=-1,rear=-1;
int queue[5];

int main(){
  for(int i;i!=0;){
    cout<<"\n1.Traversal\n2.Enqueue\n3.Dequeue\n4.Search\n5.RemoveAll\n";
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
  return 0;
}


void traversal(){
  for(int i=front;i<=rear;i++){
    cout<<"=>"<<queue[i];
  }
  cout<<endl;
}

void enqueue(){
  if(front<0) front=0;
  rear++;
  cout<<"\nEnter the Element : ";
  cin>>queue[rear];
}

void dequeue(){
  if(front<0 && rear==front) cout<<"Queue is Empty\n";
  else{
    front++;
  }
}

void search(){
  int element;
  cout<<"\nEnter the Element to search : ";
  cin>>element;
  for(int i=front;i<=rear;i++){
    if(queue[i]==element){
      cout<<"\nElement found on "<<i+1<<endl;
      return ;
    }
  }
  cout<<"\nElement not found\n";

}

void removeAll(){
  front=-1;
  rear=-1;
}
