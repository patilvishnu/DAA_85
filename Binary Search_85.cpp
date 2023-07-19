#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k,a[10],low,high,mid,ele,temp,pos;
    cout<<"Enter the no.of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(k=0;k<n;k++)
    {
        cin>>a[k];
    }
    cout<<"The elements entered are"<<endl;
    for(k=0;k<n;k++)
    {
        cout<<a[k]<<"\t"<<endl;
        
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
    }
    cout<<"The sorted elements are:"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<"\t"<<endl;
    low=0;
    high=n-1;
    cout<<"Enter the element to be found"<<endl;
    cin>>ele;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(ele==a[mid])
             {
                pos=mid;
                cout<<"Element found at position"<<mid<<endl;
                break;
             }
            else if(ele>a[mid])
             {
                low=mid+1;
             }
            else
            {
               high=mid-1;
            }
        }
        if(low>=high)
        {
            cout<<"Element not found!!";
        }
}


