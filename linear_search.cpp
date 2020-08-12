#include<iostream>
using namespace std;
int main()
{
    int i,n,m,c=0,loc;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the element of array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the element to search"<<endl;
    cin>>m;
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            loc=i;
            c=1;
            break;
        }
    }
    if(c==1)
    cout<<"Element found at index "<<loc;
    else
    cout<<"Element not found";
    return 0;
}