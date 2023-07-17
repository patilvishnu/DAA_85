#include <iostream>
using namespace  std;
int main()
{
    int a[10],i,n,j,exec,temp,min;
    cout<<"Enter the no.of the elements"<<endl;
    cin>>n;
    cout<<"The elements are:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The elements entered are:"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<"\t";
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            exec++;
            if (a[j]<a[min])
            {
                min=j;
            }
            
        }
           temp=a[i];
           a[i]=a[min];
           a[min]=temp;
        
    }
    cout<<"The basic instruction is executed"<<exec<<"times"<<endl;
    cout<<"The sorted elements are"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<"\t";
}
