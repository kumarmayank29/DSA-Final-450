#include <stdio.h>
#include<stdlib.h>

int main() {
   
 
     int arr[1000];
     int N;
     
       scanf("%d",&N);
       for(int i=0;i<N;i++)
       {
           scanf("%d",&arr[i]);
       }
       int i=0;
       int j=N-1;
       while(i<=j)
       {
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           i++;
           j--;
           
       }
          for(int i=0;i<N;i++)
       {
           printf("%d ",arr[i]);
       }
       
   }

