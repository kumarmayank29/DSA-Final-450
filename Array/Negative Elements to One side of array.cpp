#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void ShiftAll(int *arr,int n)
{
    //TYPE 1: Shifting All Negatives to the left side in O(n) time and O(1) space without worrying about order 
    // int left=0;
    // int right=n-1;
    // while(left<right)
    // {
    //     if(arr[left]<0&&arr[right]<0)
    //     {
    //         left++;
    //     }
    //     else if(arr[left]>0&&arr[right]>0)
    //     {
    //         right--;
    //     }
    //     else if(arr[left]>0&&arr[right]<0)
    //     {
    //         swap(arr[right],arr[left]);
    //     }
    //     else
    //     {
    //         left++;
    //         right--;
    //     }
    // }
  
  //TYPE 2: Shifting Negatives to the Right side of array in O(n) time and O(1) space without worring about order
    int left=0;
    int right=n-1;
    while(left<right)
    {
        if(arr[left]<0&&arr[right]<0)
        {
            right--;
        }
        else if(arr[left]>0&&arr[right]>0)
        {
            left++;
        }
        else if(arr[left]<0&&arr[right]>0)
        {
            swap(arr[left],arr[right]);
        }
        else
        {
            left++;
            right--;
        }
     }
    
}

/*
TYPE 2:
OUTPUT: Shifting Negatives to the Right side of array in O(n) time and O(1) space without worring about order
Input
8
-8 9 5 10 2 6 -7 7

Output
7 9 5 10 2 6 -7 -8 
*/


/*
TYPE 1
OUTPUT:Shifting All Negatives to the left side in O(n) time and O(1) space without worrying about order 
Input
8
-8 9 5 10 2 6 -7 7

Output
8
-8 -7 5 10 2 6 9 7
*/
/* TYPE 3:  Task is to complete the function segregateElements() which takes the array A[] and its size N as inputs and store the answer in the array A[] itself. 
Place all negative element at the end of array without changing the order of positive element and negative element. 

NOTE:
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

For Input:
8
1 -1 3 2 -7 -5 11 6
your output is: 
1 3 2 11 6 -1 -7 -5 



 void segregateElements(int arr[],int n)
    {
    if(n==0)
    return;
    
    
    int temp[n];
    int j=0;
    //+ive Elements
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]>=0)
        {
            temp[j]=arr[i];
            j++;
        }
    }
    
    //If array containes all positives
        
        if(j==n)
        {
            return;
        }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            temp[j]=arr[i];
            j++;
        }
    }
        
    memcpy(arr,temp,sizeof(temp));
       
    }


*/




int main()
{
    int k;
    cin>>k;
    int *arr=new int[k];
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    }
    ShiftAll(arr,k);
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
}
