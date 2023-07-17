#include <iostream>
using namespace std;
void combine(int a[],int low,int mid,int high)
{
    int i,j,k,c[high];
    i=low;
    j= mid+1;
    k=low;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            k=k+1;
            i=i+1;
        }
        else
        {
            c[k]=a[j];
            k=k+1;
            j=j+1;
        }
        
    }
    if(i>mid)
    {
        while(j<=high)
        {
            c[k]=a[j];
            k=k+1;
            j=j+1;
        }
    }
    if(j>high)
    {
        while(i<=mid)
        {
            c[k]=a[i];
            k=k+1;
            i=i+1;
        }
    }
    for(i=low;i<=high;i++)
    {
        a[i]=c[i];
    }
}

void split(int a[],int low,int high)
{
    int mid,i,n;
    if(low<high)
    {
        mid=(low+high)/2;
        split(a,low,mid);
        split(a,mid+1,high);
        combine(a,low,mid,high);
    }
}

   

int main()
{
    int n,i,low,high;
    cout<<"Enter the no.of elements"<<endl;
    cin>>n;
    low=0;
    high=n-1;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    split(a,low,high);
    cout<<"The sorted elementsare"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<"\t";
}    