#include <stdio.h>

void traversal();
void enqueue();
void dequeue();
void search();
void removeAll();

struct node{
  int value;
  struct node * next;
  struct node * prev;
};

struct node * head,tail;
int front=-1,rear=-1,size=5;
void main(){
  for(int i;i!=0;){
    printf("\nEnter your choice : ");
    scanf("%d",&i);
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
      default:return;
    }
  }
}



void traversal(){}
void enqueue(){
  struct node * newNode = malloc(sizeof(struct node));
  printf("\nEnter your number : ");
  scanf("%d",&newNode->value);
  if(front == NULL){
    newNode->prev=NULL;
    newNode->next=NULL;
    front = newNode;
    head++;
  }
  if
}
void dequeue(){}
void search(){}
void removeAll(){}
