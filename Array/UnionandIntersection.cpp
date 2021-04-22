
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//TC for both  O(m+n)
void printUnion(int *a,int *b, int n1,int n2)
{
    int i=0,j=0;
    while(i<n1&&j<n2)
    {
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
           
            i++;
        }
        else if(a[i]>b[j])
        {
            cout<<b[j]<<" ";
           
            j++;
        }
        else
        {
            cout<<a[i]<<" ";
            i++;
            j++;
           
        }
    }
    
    while(i<n1)
    {
        cout<<a[i]<<" ";
      
        i++;
    }
    
    while(j<n2)
    {
        cout<<b[j]<<" ";
         
        j++;
    }
    
    
    
}

void printIntersection(int *a,int *b, int n1,int n2)
{
    int i=0,j=0;
    while(i<n1&&j<n2)
    {
        if(a[i]<b[j])
        {
           
            i++;
        }
        else if(a[i]>b[j])
        {
           
            j++;
        }
        else
        {
            cout<<a[i]<<" ";
            i++;
            j++;
           
        }
    }
    
    

}

    
    
    

int main() {

    int t;
    cin >> t;
    

    while(t--){
        int n1;
        cin >>n1;
        int a[n1];
        for(int i=0;i<n1;i++){
            cin >> a[i];
        }
        
        int n2;
        cin >>n2;
        int b[n2];
        for(int i=0;i<n2;i++){
            cin >> b[i];
        }

      cout<<"Union of Arrays is \n"; 
      printUnion(a,b,n1,n2);
        cout<<"\n\n";
     cout<<"Intersection of Arrays is \n" ;    
     printIntersection(a,b,n1,n2);

        
        
    }
    return 0;
}


// Input:
// 1
// 5
// 2 5 6 11 44
// 4
// 2 3 7 44 

// Output:
// Union of Arrays is 
// 2 3 5 6 7 11 44 

// Intersection of Arrays is 
// 2 44 


