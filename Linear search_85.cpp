#include <iostream>
using namespace std;
int main()
{
    int n,i,a[20],ele;
    cout<<"Enter the no.of elements"<<endl;
    cin>>n;
    cout<<"Elements entered are:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The elements entered are"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t"<<endl;
    }
    cout<<"Enter the element to be found"<<endl;
    cin>>ele;
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            cout<<"Element found at pos"<<i+1<<endl;
            break;
        }
    }
    if(a[i]!=ele)
    {
        cout<<"Element not found!";
    }
    
}