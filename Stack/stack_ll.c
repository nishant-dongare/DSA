#include <stdio.h>
#include<stdlib.h>

void push();
void traversal();
void pop();
void removeAll();

struct node{
  int value;
  struct node * next;
};

struct node *head=NULL,*top=NULL;
int size=-1;

void main(){
  int c;
  while(c!=0){
    printf("\nEnter your choice : ");
    scanf("%d",&c);
    switch(c){
      case 1:traversal();
        break;
      case 2:push();
        break;
      case 3:pop();
        break;
      case 4:removeAll();
        break;
      default:c=0;
    }
  }
}

void push(){
  struct node * newNode = malloc(sizeof(struct node));
  printf("Enter the element to be inserted : \n");
  scanf("%d",&newNode->value);
  newNode->next= NULL;
  if(head==NULL){         
    head=newNode;  
    top=head;
  }
  else{
    top->next=newNode;
    top = newNode;
  }
  size++;
}

void pop(){
  if(head == NULL) printf("\nStack is Empty");
  if(head->next == NULL){
    head=NULL;
    free(head);
  }
  else{
    struct node * ptr;
    ptr=head;
    for(;ptr->next != top;ptr=ptr->next);
    ptr->next=NULL;
    free(top);
    top=ptr;
  }
  size--;
}

void traversal(){
  struct node * ptr;
  ptr=head;
  if(ptr == NULL){  
    printf("Stack is empty\n");  
  }else{  
    printf("Printing Stack elements \n");  
    while(ptr!=NULL){
      printf("->%d",ptr->value);  
      ptr = ptr->next;  
    }  
  }  
}

void removeAll(){
  struct node * ptr;
  while(head!=NULL){
    ptr=head;
    head=head->next;
    free(ptr);
  }
  size=-1;
}