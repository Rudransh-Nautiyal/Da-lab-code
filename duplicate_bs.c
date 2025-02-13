#include<stdio.h>
#include<stdlib.h>
void bs(int arr[],int size,int ub,int lb,int key,int*c)
{
 int mid=(lb+ub)/2;
 if(lb>ub)
 {
  return ;
 }
 if(key==arr[mid])
 {
  (*c)++;
  bs(arr,size,mid-1,lb,key,c);
  bs(arr,size,ub,mid+1,key,c);
 }
 else if(key<arr[mid])
 {
  bs(arr,size,mid-1,lb,key,c);
 }
 else
 {
  bs(arr,size,ub,mid+1,key,c);
 }
 
}
void main()
{
 int size,key;
 int c=0;
 printf("Enter the size of array\n");
 scanf("%d",&size);
 int *arr=(int*)malloc(size*sizeof(int));
 printf("Enter the array elements\n");
 for(int i=0;i<size;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Enter the key\n");
 scanf("%d",&key);
 bs(arr,size,size,0,key,&c);
 if(c>1)
 printf("%d has %d duplicates\n ",key,c);
 else
 printf("%d has no duplicates\n ",key);
}
