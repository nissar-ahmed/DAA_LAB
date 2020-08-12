#include<iostream>
using namespace std;
int main()
{
    int i,n,j,temp;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the element of array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        int key=a[i];
        j=i-1;
        
            while(j>=0&&a[j]>key)
            {
                a[j+1]=a[j];
                j=j-1;
            }
            a[j+1]=key;
        
    }
    cout<<"After sorted :"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}