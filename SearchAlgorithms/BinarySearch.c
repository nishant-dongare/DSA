#include<stdio.h>

int binarySearch(int[],int,int);
void main(){
  int a[5] = {10,20,30,40,50},element,first=0,last;
  int len = sizeof(a)/sizeof(a[0]);
  // printf("%d",last);
  printf("\nEnter Element to be search : ");
  scanf("%d",&element);
  int result=binarySearch(a,element,len);
  if(result>0)
    printf("\nElement Found at %d\n",result);
  else 
    printf("\nNo Element Found\n");
}

int binarySearch(int a[],int element,int high){
  int mid,low=0;
  while(high>low){
    mid=(high+low)/2;
    if (a[mid]==element) return mid+1;
    if(element < a[mid]){
      high=mid;
    }else{
      low=mid;
    }
    // printf("\n%d %d %d",low,mid,high);
  }
  return 0;
}