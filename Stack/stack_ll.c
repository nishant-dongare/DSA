#include <stdio.h>
#include<stdlib.h>

void traversal();
void push();
void pop();
void search();
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
      case 4:search();
        break;
      case 5:removeAll();
        break;
      default:c=0;
    }
  }
}

void push(){
  struct node * newNode = malloc(sizeof(struct node));
  printf("\nEnter the element to be inserted : ");
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
    printf("\nStack is empty");  
  }else{  
    printf("\nPrinting Stack elements");  
    while(ptr!=NULL){
      printf("=>%d",ptr->value);  
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

void search(){
  int value,i=1;
  printf("Enter the element to Search : \n");
  scanf("%d",&value);
  for(struct node * ptr=head;ptr->value!=value;ptr=ptr->next)
    i++;
  printf("\nElement is found on %d position\n",i);
}