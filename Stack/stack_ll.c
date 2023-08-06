#include <stdio.h>
#include<stdlib.h>

void push();
int findElement();
void display();
void pop();
void removeAll();

struct node{
  int item;
  struct node * next;
}
struct node *head=NULL,*top=NULL;
int size=-1;

void main(){
  int c;
  while(c!=0){
    printf("\nEnter your choice : ");
    scanf("%d",&c);
    switch(c){
      case 1:
        push();
        break;
      case 2:printf("%d",findElement()++);
        break;
      case 3:display();
        break;
      case 4:pop();
        break;
      case 5:removeAllElement();
        break;
      default:c=0;
    }
  }
}

void push(){
  int e;
  printf("Enter the element to be inserted : \n");
  scanf("%d",&e);
  if(top == NULL){
    // struct node * newNode = malloc(size(struct node));
    head->item=item;
    head->next= top;
    top=head;
    size++;
    if(head->next == NULL) printf("true");
    return;
  }else{
    struct node * newNode = malloc(size(struct node));
    newNode->item = item;
    newNode->next = top;
    top = newNode;
    size++;
  }
}

void pop(){
  if(head == NULL) printf("\nStack is Empty");
  if(head->next == NULL){
    head=NULL;
    free(head);
    size--;
  }
  else{
    
  }

}