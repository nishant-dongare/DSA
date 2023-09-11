#include<stdio.h>

void bubbleSort(int[],int);
void main(){
  int a[5] = {50,20,10,40,30};
  int len = sizeof(a)/sizeof(a[0]);
  bubbleSort(a,len);
}

void bubbleSort(int a[],int len){
  int temp;
  for(int i=0;i<len-1;i++){
    for(int j=0;j<len;j++){
      if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  for(int i=0;i<len;i++){
    printf("=> %d",a[i]);
  }
  printf("\n");
}