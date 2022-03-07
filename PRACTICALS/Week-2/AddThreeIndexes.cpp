
#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter the element of array:"<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>A[i];
    }
    cout<<"Indexes are:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {

                if(A[k]==A[i]+A[j])
                {

                    cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }

    }
    return 0;
}
