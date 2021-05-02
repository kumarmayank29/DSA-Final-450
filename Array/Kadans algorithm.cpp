#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*Method 1 Brute Force O(n^3)
int maxsubarraysum(int *arr,int n)
{
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<j;k++)
            {
                sum=sum+arr[k];
                
            }
            
            if(sum>=maxsum)
                {
                    maxsum=sum;
                }
        }
    }
    
    return maxsum;
    
}
*/





/*This is O(n^2)*/
// int maxsubarraysum(int *arr,int n)
// {
//  int maxsum=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//          int sum=0;
//         for(int j=i;j<n;j++)
//         {
//             sum=sum+arr[j];
//             if(sum>=maxsum)
//                 {
//                     maxsum=sum;
//                 }
//         }
//     }
    
//     return maxsum;
// }









/*O(n) -The Kadane Algorithm*/
int maxsubarraysum(int *arr,int n)
{
     int maximum=arr[0];
     int maxsumsofar=arr[0];
     
    for(int i=1;i<n;i++)
    {
         maxsumsofar=max(maxsumsofar+arr[i],arr[i]);
        if(maxsumsofar>maximum)
        {
            maximum=maxsumsofar;
        }
        
       
       
        
    }
    
    return maximum;
}

int main() {
    int k;
    cin>>k;
	int *arr=new int[k];
	for(int i=1;i<k;i++)
	{
	    cin>>arr[i];
	}
	cout<<"Maximum sum is "<<maxsubarraysum(arr,k);
  
  	return 0;
}




/*
10
-1 5 2 -2 1 3 -4 2 -5 6

ans =9



8
-1 2 4 -3 5 2 -5 2

10


23
-81 -71 98 55 76 -52 68 15 -77 77 -42 -70 -53 86 29 -30 14 25 -94 73 -68 81 44

260
*/
