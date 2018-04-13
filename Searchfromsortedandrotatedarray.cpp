#include<iostream>
using namespace std;
int search(int A[],int l,int h,int x)
{
    if(l>h)
    return -1;
    int mid=(l+h)/2;
    if(x==A[mid])
    return mid;
    if(A[l]<=A[mid])
    {
        if(x>=A[l]&&x<=A[mid])
        {
        
return search(A,l,mid-1,x);
}
return search(A,mid+1,h,x);
    }
    
    if(x>=A[mid]&&x<=A[h])
    {
    return search(A,mid+1,h,x);
    }
    return search(A,l,mid-1,x);
    
    
}
int main()
{
    int A[]= {7,1,2,3,4,5,6};
    int n=sizeof(A)/sizeof(A[0]);
    int x;
    cout<<"enter the value of element to be searched";
    cin>>x;
    int ans=search(A,0,n-1,x);
    if(ans==-1)
    cout<<"element not found";
    else
    cout<<"the index is"<<ans;
    return 0;
}