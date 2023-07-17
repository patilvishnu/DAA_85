#include <iostream>
using namespace std;
int main()
{
    int n,a[10],i,j,temp,exec;
    cout<<"Enter the no.of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The original elements are:"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            exec++;
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
    }
    cout<<"The basic instr is executed"<<exec<<"times"<<endl;
    cout<<"The sorted elements are:"<<endl;
    for(i=0;i<n;i++)
    cout<<a[i]<<"\t";
    return 0;
        
}
