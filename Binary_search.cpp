#include<iostream>
using namespace std;
int main()
{
    int i,n,m,c=0,mid;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the element of array in accending order"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the element to search"<<endl;
    cin>>m;
    int first=0,last=n-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(a[mid]<m)
        first=mid+1;
        else if(a[mid]==m)
        {
            cout<<"Element found at index "<<mid<<endl;
            break;
        }
        else
        last=mid-1;
        mid=(first+last)/2;
        if(first>last)
        cout<<"Element not found";
    }
    return 0;
}