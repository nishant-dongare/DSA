#include<iostream>
using namespace std;

void printArray(int arr[],int len){
  for(int i=0;i<len;i++){
    printf("=> %d",arr[i]);
  }
  printf("\n");
}

void selectionSort(int arr[],int len){
  int j,min,temp;
  for(int i=0;i<len;i++){
    min=i;
    for(int j=i+1;j<len;j++){
      if(arr[j]<arr[min]) min=j;
    }
    if(min!=i){
      temp=arr[i];
      arr[i]=arr[min];
      arr[min]=temp;
    }
  }
  printArray(arr,len);
}



int main(){
  int arr[5] = {50,20,10,40,30};
  int len = sizeof(arr)/sizeof(arr[0]);
  selectionSort(arr,len);
  return 0;
}

