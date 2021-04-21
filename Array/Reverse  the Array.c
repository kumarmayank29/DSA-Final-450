#include <iostream>
using namespace std;

int* ReverseArr(int *p,int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int temp=p[i];
            p[i]=p[j];
            p[j]=temp;
            i++;
            j--;
            if(i==j)
            {
                break;
            }
    }
    return p;
}

int main() {
    int n;
    cout<<"Reversed Array \n";
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    ReverseArr(p,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
        
        
        
    }
    //Increase Each element by 1
    // cout<<"\n\n";
    
    //  for(int i=0;i<n;i++)
    // {
    //     cout<<p[i]+1<<" ";
        
    // }
}
