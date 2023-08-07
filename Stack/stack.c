#include <stdio.h>

int TOP=-1;
int array[5];

void push();
int search();
void traversal();
void pop();
void removeAll();

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
  TOP++;
  printf("\nEnter your number : ");
  scanf("%d",&array[TOP]);
}

int search(){
  int n;
  printf("\nEnter your number : ");
  scanf("%d",&n);
  for(int p=0;p<=TOP;p++){
    if(n==array[p]){
      return p;
    }
  }
  return -1;
}

void traversal(){
  for(int i=0;i<=TOP;i++){
    printf("%d",array[i]);
  }
}

void pop(){
  array[TOP]=NULL;
  TOP--;
}

void removeAll(){
  for(int i=0;i<=TOP;i++){
    array[TOP]=NULL;
  }
  TOP=-1;
}