#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    if(n==1)
        cout<<"I hate it";
    else
    {
        for(i=1; i<=n; i++)
        {
            if(i%2!=0 && i<n)
                cout<<" I hate that";
            if(i%2==0 && i<n)
                cout<<" I love that";
            if( i%2==0 && i==n)
                    cout<<" I love it";
            if( i%2!=0 && i==n)
                    cout<<" I hate it";
        }
    }
}
