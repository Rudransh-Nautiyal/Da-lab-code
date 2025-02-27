#include<stdio.h>
#include<stdlib.h>
void main()
{ 
  int n,comp=0,swap=0;
  printf("Enter the size of array\n");
  scanf("%d",&n);
  int * arr=(int*)malloc(n*sizeof(int));
  printf("Enter the array elements\n");
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(int i=0;i<n-1;i++)
  {
   int min=i,temp;
   for(int j=i+1;j<n;j++)
   {
     temp=arr[i];
      comp++;
     if(arr[j]<arr[min])
     {
       min=j;
     }
   }
     arr[i]=arr[min];
     arr[min]=temp;
     swap++;
  }
  
  printf("The sorted array is\n");
  for(int i=0;i<n;i++)
  printf("%d\n",arr[i]);
  printf("Number of comparisions are:%d\n",comp);
  printf("Number of swaps are:%d\n",swap);
}
