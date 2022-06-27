#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin>>n;
 
    if(n==1)
    {
        cout<<1<<endl;
    }
    else if(n==4)
    {
        cout<<2<<" "<<4<<" "<<1<<" "<<3;
    }
    else if(n<=4)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                cout<<i<<" ";
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                cout<<i<<" ";
            }
        }
    }
}
